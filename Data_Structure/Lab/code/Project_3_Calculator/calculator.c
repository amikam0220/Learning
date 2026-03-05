#include <stdio.h>
#include <stdlib.h> //for malloc()
#include <ctype.h>  //for isdigit() and atoi()
#include <string.h> //for strtok()

#define ERROR __INT_MAX__ // as the error result of calculate
#define MAXSIZE 100000    // as the max size of expression

typedef struct Enode
{
    union element
    {
        char ope;    // store operator and parenthesis
        int operand; // store operand
    } element;
    int flag; // 1 for operator, 0 for operand, -1 for ERROR or end
} Enode;

typedef struct Snode
{
    Enode data;
    struct Snode *next;
} Snode;
typedef struct Snode *Stack; // ADT of stack

Stack CreateStack();
int IsEmpty(Stack stk);
void PushNode(Stack stk, Enode item);
Enode PopNode(Stack stk);
Stack Destroystk(Stack stk); // prototype of stack

int IsOperator(char c);
Enode *CreateInfix();
int Priority(char c);
Enode *Convert(Enode *infixexp);
void DisplayExpression(Enode *exp);
int CalculatePost(Enode *postexp); // prototype of expression

int main()
{
    printf("=== Infix to Postfix Calculator ===\n");

    Enode *infix = CreateInfix(); // create infix expression
    if (!infix)
    {
        return 1;
    }

    DisplayExpression(infix); // display the infix expression

    Enode *postfix = Convert(infix);
    if (!postfix)
    {
        free(infix);
        return 1;
    } // convert the infix expression into postfix expression

    printf("Postfix expression: \n");
    DisplayExpression(postfix); // display the postfix expression

    int result = CalculatePost(postfix); // calculate the result of the postfix expression
    printf("Result: %d\n", result);      // display the result

    free(infix);
    free(postfix); // free the expressions

    return 0;
}

Stack CreateStack()
{
    Stack top = (struct Snode *)malloc(sizeof(struct Snode));
    if (!top)
    {
        printf("Fail to create the stack.\n");
        return NULL;
    }
    top->next = NULL; // head node
    return top;
}

int IsEmpty(Stack stk)
{
    if (!stk || !stk->next)
        return 1;
    return 0;
}

void PushNode(Stack stk, Enode item)
{
    if (!stk)
    {
        printf("The stack has not been created.\n");
        return;
    }
    Snode *newnode = (Snode *)malloc(sizeof(struct Snode));
    if (!newnode)
    {
        printf("No enough memory to create new node.\n");
        return;
    }
    newnode->next = stk->next;
    if (item.flag)
    {
        newnode->data.flag = 1;
        newnode->data.element.ope = item.element.ope;
    }
    else
    {
        newnode->data.flag = 0;
        newnode->data.element.operand = item.element.operand;
    }
    stk->next = newnode;
    return;
}

Enode PopNode(Stack stk)
{
    Enode retdata;
    if (!stk)
    {
        printf("The stack has not been created.\n");
        retdata.flag = -1;
        return retdata;
    }
    if (IsEmpty(stk))
    {
        printf("The stack is empty.\n");
        retdata.flag = -1;
        return retdata;
    }
    Snode *tmpnode = stk->next;
    retdata = tmpnode->data;
    stk->next = tmpnode->next;
    free(tmpnode);
    return retdata;
}

Stack Destroystk(Stack stk)
{
    if (!stk)
    {
        printf("The stack has not been created.\n");
        return NULL;
    }

    while (!IsEmpty(stk))
    {
        PopNode(stk);
    }
    free(stk);
    return NULL;
}

int IsOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
} // judge whether the character is legal operator

Enode *CreateInfix()
{
    Enode *ret = (Enode *)malloc((MAXSIZE + 1) * sizeof(Enode)); // extra node to store end marker
    if (!ret)
    {
        printf("No enough memory to create expression.\n");
        return NULL;
    }

    printf("Please enter the infix expression.\n");
    printf(" (Separate operator and operands by space; at most 100000 symbols)\n");
    char line[256];
    if (fgets(line, sizeof(line), stdin) == NULL)
    {
        printf("Failed to read input.\n");
        free(ret);
        return NULL;
    } // get line in stdin

    int i = 0;
    char *token = strtok(line, " \n"); // seperate by space and \n

    while (token != NULL)
    {
        if (isdigit(token[0]) || ((token[0] == '-' || token[0] == '+') && isdigit(token[1]))) // check whether is operand
        {
            ret[i].flag = 0;
            ret[i].element.operand = atoi(token); // convert the token to operand (int)

            if (i != 0 && ret[i - 1].flag == 0)
            {
                printf("The expression is error. (Two adjacent operand)\n");
                free(ret);
                return NULL;
            }
            if (i != 0 && ret[i - 1].flag == 1)
            {
                char pre = ret[i - 1].element.ope;
                int cur = ret[i].element.operand;
                if (i == 1 && (pre == '*' || pre == '/'))
                {
                    printf("The expression is error. (Error start operator)\n");
                    free(ret);
                    return NULL;
                }
                if (i != 1 && (pre == ')'))
                {
                    printf("The expression is error. (Operator and then illegal operand)\n");
                    free(ret);
                    return NULL;
                }
                if (i != 1 && (cur == 0) && (pre == '/'))
                {
                    printf("The expression is error. (Divide by 0)\n");
                    free(ret);
                    return NULL;
                }
            } // handle error situation of the expression caused by operand

            i++;
        }
        else if (strlen(token) == 1 && IsOperator(token[0]))
        {

            char op = token[0];
            ret[i].flag = 1;
            ret[i].element.ope = op; // handle the operator

            if (i != 0 && ret[i - 1].flag == 1)
            {
                char pre = ret[i - 1].element.ope;
                char cur = ret[i].element.ope;
                int IsIllegal = 0;

                if (cur == '(' && pre == ')')
                {
                    IsIllegal = 1;
                }
                if (cur == ')' && pre != ')')
                {
                    IsIllegal = 1;
                }
                if ((cur == '+' || cur == '-') && (pre != '(' && pre != ')'))
                {
                    IsIllegal = 1;
                }
                if ((cur == '*' || cur == '/') && (pre != ')'))
                {
                    IsIllegal = 1;
                }

                if (IsIllegal)
                {
                    printf("The expression is error. (Two illegally adjacent operators)\n");
                    free(ret);
                    return NULL;
                }
            }
            if (i != 0 && ret[i - 1].flag == 0)
            {
                char cur = ret[i].element.ope;
                int IsIllegal = 0;
                if (cur == '(')
                {
                    IsIllegal = 1;
                }
                if (IsIllegal)
                {
                    printf("The expression is error. (Operand and then illegal operator)\n");
                    free(ret);
                    return NULL;
                }
            }
            if (i == 0)
            {
                char cur = ret[i].element.ope;
                int IsIllegal = 0;
                if (cur != '+' && cur != '-' && cur != '(')
                {
                    IsIllegal = 1;
                }
                if (IsIllegal)
                {
                    printf("The expression is error. (Error first operator)\n");
                    free(ret);
                    return NULL;
                }
            } // handle error situation of the expression caused by operator

            i++;
        }
        else
        {
            printf("Invalid input: %s\n", token);
            free(ret);
            return NULL;
        }

        token = strtok(NULL, " \n"); // get the next token
    }

    ret[i].flag = -1; // set as the end of the expression

    int leftcnt = 0, rightcnt = 0;
    for (int j = 0; j < i; j++)
    {
        if (ret[j].flag == 1 && ret[j].element.ope == '(')
        {
            leftcnt++;
        }
        if (ret[j].flag == 1 && ret[j].element.ope == ')')
        {
            rightcnt++;
            if (leftcnt < rightcnt)
            {
                printf("The expression is error. (right parenthesis without left parenthesis)\n");
                free(ret);
                return NULL;
            }
        }
    }
    if (leftcnt != rightcnt)
    {
        printf("The expression is error.(left and right parentheses do not match)\n");
        free(ret);
        return NULL;
    } // check whether the parentheses match

    if (i > 0)
    {
        if (ret[i - 1].flag == 1 && ret[i - 1].element.ope != ')')
        {
            printf("The expression is error. (error end symbol)\n");
            free(ret);
            return NULL;
        }
    } // check the end of the expression

    if (i == 0){
        printf("The expression is empty.\n");
        free(ret);
        return NULL;
    } // check whether the expression is empty

    return ret;
}

int Priority(char c)
{
    int ret = 0;
    if (c == '+' || c == '-')
        ret = 1;
    if (c == '*' || c == '/')
        ret = 2;
    return ret;
} // return priority of operator

Enode *Convert(Enode *infixexp)
{
    if (!infixexp)
    {
        printf("The infix expression has not been created.\n");
        return NULL;
    } // handle error situation

    int size = 0;
    for (int i = 0; infixexp[i].flag != -1; i++)
    {
        size++;
    }
    Enode *ret = (Enode *)malloc((size + 1) * sizeof(Enode)); // create post expression for return

    Stack stkoperator = CreateStack();

    int i = 0, j = 0;
    while (i < size)
    {
        if (infixexp[i].flag == 0)
        {
            ret[j].flag = 0;
            ret[j].element.operand = infixexp[i].element.operand;
            j++;
        } // for operand, output directly
        else if (infixexp[i].flag == 1)
        {
            char cur = infixexp[i].element.ope;
            if (cur == '(')
            {
                PushNode(stkoperator, infixexp[i]);
            } // for the left parenthesis, push in the stack directly
            else if (cur == ')')
            {
                while (!IsEmpty(stkoperator) && stkoperator->next->data.element.ope != '(')
                {
                    ret[j].flag = 1;
                    ret[j].element.ope = PopNode(stkoperator).element.ope;
                    j++;
                }
                PopNode(stkoperator);
            } // for the right parenthesis, pop the stack and output until encounter the left parenthesis
            else
            {
                while (!IsEmpty(stkoperator) && Priority(cur) <= Priority(stkoperator->next->data.element.ope))
                {
                    ret[j].flag = 1;
                    ret[j].element.ope = PopNode(stkoperator).element.ope;
                    j++;
                }
                PushNode(stkoperator, infixexp[i]);
            } // for other operators, push to the stack and pop all operators with higher priority
        }
        i++;
    }

    while (!IsEmpty(stkoperator))
    {
        ret[j].flag = 1;
        ret[j].element.ope = PopNode(stkoperator).element.ope;
        j++;
    } // pop all rest operator in the stack

    ret[j].flag = -1; // set as the end of the expression

    stkoperator = Destroystk(stkoperator); // destroy the stack
    return ret;
}

void DisplayExpression(Enode *exp)
{
    if (!exp)
    {
        printf("The expression has not been created.\n");
        return;
    }

    int i = 0;
    printf("The expression is: \n");
    while (exp[i].flag != -1)
    {
        if (exp[i].flag)
        {
            printf("%c ", exp[i].element.ope);
        }
        else
        {
            printf("%d ", exp[i].element.operand);
        }
        i++;
    } // print the expression by flag
    printf("\n");
}

int CalculatePost(Enode *postexp)
{
    if (!postexp)
    {
        printf("The post expression has not been created.\n");
        return ERROR;
    }

    Stack stkoperand = CreateStack(); // stack to store operand

    int i = 0;
    int ret;

    Enode tmp;
    tmp.flag = 0;   // tmpnode to store result
    int tmp1, tmp2; // store two elements at the top of stack

    while (postexp[i].flag != -1)
    {
        if (!postexp[i].flag) // for operand, store in the stack
        {
            PushNode(stkoperand, postexp[i]);
        }
        else // for operator
        {
            if (postexp[i].element.ope == '+')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 + tmp1;
            }
            else if (postexp[i].element.ope == '-')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 - tmp1;
            }
            else if (postexp[i].element.ope == '*')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 * tmp1;
            }
            else if (postexp[i].element.ope == '/')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 / tmp1;
            }
            PushNode(stkoperand, tmp);
        }
        i++;
    }
    ret = PopNode(stkoperand).element.operand;
    stkoperand = Destroystk(stkoperand); // destroy the stack
    return ret;
}