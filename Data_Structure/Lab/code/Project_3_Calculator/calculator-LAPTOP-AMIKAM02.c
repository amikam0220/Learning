#include <stdio.h>
#include <stdlib.h>

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
Stack Destroystk(Stack stk);
int IsEmpty(Stack stk);
void PushNode(Stack stk, Enode item);
Enode PopNode(Stack stk); // prototypes of stack

int Isoperator(char c);
Enode *CreateInfix();
int Priority(char c);
Enode *Convert(Enode *infixexp);
int CalculatePost(Enode *postexp);
void DisplayExpression(Enode *exp); // prototypes of expressions

int main()
{
    Enode *infix = CreateInfix();
    if (infix)
    {
        DisplayExpression(infix);

        Enode *postfix = Convert(infix);
        if (postfix)
        {
            DisplayExpression(postfix);

            int result = CalculatePost(postfix);
            printf("Result: %d\n", result);

            free(postfix);
        }
        free(infix);
    }
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

int Isoperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')');
}; // judge whether the character is legal ope

Enode *CreateInfix()
{

    Enode *ret = (Enode *)malloc((MAXSIZE + 1) * sizeof(Enode)); // extra for end marker
    if (!ret)
    {
        printf("No enough memory to create expression.\n");
        return NULL;
    } // create ret as the array to store infix expression

    printf("Please enter the infix expression(Seperate ope and operands by space).\n");

    int i = 0;
    int num;
    char op;

    while (1)
    {
        if (scanf("%d", &num) == 1) // scan for operand
        {
            ret[i].flag = 0;
            ret[i].element.operand = num;
            if (i != 0 && ret[i - 1].flag == 0)
            {
                printf("The expression is error. (Two adjacent operand)\n");
                free(ret);
                return NULL;
            } // two adjacent operand when i != 0
            if (i != 0 && ret[i - 1].flag == 1)
            {
                char pre = ret[i - 1].element.ope;
                int cur = ret[i].element.operand;
                if (i == 1 && (pre == '*' || pre == '/'))
                {
                    printf("The expression is error. (Error start ope)\n");
                    free(ret);
                    return NULL;
                } // illegal first operator
                if (i != 1 && (pre == ')'))
                {
                    printf("The expression is error. (Error ope and then error operand)\n");
                    free(ret);
                    return NULL;
                } // error operator and then error operand
                if (i != 1 && (cur == 0) && (pre == '/'))
                {
                    printf("The expression is error. (Divide by 0)\n");
                    free(ret);
                    return NULL;
                } // divide by 0
            }
            i++;
        }
        else if (scanf("%c", &op) == 1) // scan for operator
        {
            if (op == ' '){
                continue;
            }//clear the space

            if (Isoperator(op)) // check whether the character is legal
            {
                ret[i].flag = 1;
                ret[i].element.ope = op;
                if (i != 0 && ret[i - 1].flag == 1)
                {
                    char pre = ret[i - 1].element.ope;
                    char cur = ret[i].element.ope;
                    int IsIllegal = 0;
                    if (cur == '(' && pre == ')') // for cur is '('
                    {
                        IsIllegal = 1;
                    }
                    if (cur == ')' && pre != ')') // for cur is ')'
                    {
                        IsIllegal = 1;
                    }
                    if ((cur == '+' || cur == '-') && (pre != '(' && pre != ')')) // for cur is '+' or '-'
                    {
                        IsIllegal = 1;
                    }
                    if ((cur == '*' || cur == '/') && (pre != ')')) // for cur is '*' or '/'
                    {
                        IsIllegal = 1;
                    }

                    if (IsIllegal)
                    {
                        printf("The expression is error. (Two illegally adjacent opes)\n");
                        free(ret);
                        return NULL;
                    }
                } // two illegally adjacent operator when i != 0
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
                        printf("The expression is error. (Error operand and then error ope)\n");
                        free(ret);
                        return NULL;
                    }
                } // illegal operand and operator when i != 0
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
                        printf("The expression is error. (Error first ope)\n");
                        free(ret);
                        return NULL;
                    }
                }
                i++;
            }
            else // handle invalid character input
            {
                if (op == '\n'){
                    break;
                }
                printf("Invalid input: %c.\n", op);
                free(ret);
                return NULL;
            }
        }
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
            if (leftcnt < rightcnt && ret[j].flag == 1 && ret[j].element.ope == ')')
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
    } // check whether the parentheses is legal

    if (i > 0)
    {
        if (ret[i - 1].flag == 1 && ret[i - 1].element.ope != ')')
        {
            printf("The expression is error. (error end symbol)\n");
            free(ret);
            return NULL;
        } // check the end
    }
    return ret;
} // create the infix expression

int Priority(char c)
{
    int ret = 0;
    if (c == '+' || c == '-')
        ret = 1;
    if (c == '*' || c == '/')
        ret = 2;
    return ret;
} // take the priority of operator

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

    Stack stkope = CreateStack();

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

            if (IsEmpty(stkope))
            {
                PushNode(stkope, infixexp[i]);
            }
            else
            {
                if (cur == '(')
                {
                    PushNode(stkope, infixexp[i]);
                } // for the left parenthesis, push in the stack directly
                else if (cur == ')')
                {
                    while (!IsEmpty(stkope) && stkope->next->data.element.ope != '(')
                    {
                        ret[j].flag = 1;
                        ret[j].element.ope = PopNode(stkope).element.ope;
                        j++;
                    }
                    PopNode(stkope);
                } // for the right parenthesis, pop the stack and output until encounter the left parenthesis
                else
                {
                    while (!IsEmpty(stkope) && Priority(cur) <= Priority(stkope->next->data.element.ope))
                    {
                        ret[j].flag = 1;
                        ret[j].element.ope = PopNode(stkope).element.ope;
                        j++;
                    }
                    PushNode(stkope, infixexp[i]);
                } // for other operators, push to the stack and pop all opes with higher priority
            }
        }
        i++;
    }

    while (!IsEmpty(stkope))
    {
        ret[j].flag = 1;
        ret[j].element.ope = PopNode(stkope).element.operand;
        j++;
    } // pop all rest operators in the stack

    ret[j].flag = -1; // set as the end of the expression

    stkope = Destroystk(stkope); // destroy the stack
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
            printf("%c", exp[i].element.ope);
        }
        else
        {
            printf("%d", exp[i].element.operand);
        }
        i++;
    } // print the expression by flag
    printf("\n");
}

int CalculatePost(Enode *postexp)
{
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
        else // for operators, pop two operators at the top of the stack and calculate, then store in the stack again
        {
            if (postexp[i].element.ope == '+')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 + tmp1;
                PushNode(stkoperand, tmp);
            }
            else if (postexp[i].element.ope == '-')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 - tmp1;
                PushNode(stkoperand, tmp);
            }
            else if (postexp[i].element.ope == '*')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 * tmp1;
                PushNode(stkoperand, tmp);
            }
            else if (postexp[i].element.ope == '/')
            {
                tmp1 = PopNode(stkoperand).element.operand;
                tmp2 = PopNode(stkoperand).element.operand;
                tmp.element.operand = tmp2 / tmp1;
                PushNode(stkoperand, tmp);
            }
        }
        i++;
    }
    ret = PopNode(stkoperand).element.operand;
    stkoperand = Destroystk(stkoperand); // destroy the stack
    return ret;
}
