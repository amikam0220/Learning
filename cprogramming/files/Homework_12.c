#include <stdio.h>
#define MAXNAME 30
#define MAXPHONE 15
struct TeleType
{
    char name[MAXNAME];
    char phoneNum[MAXPHONE];
    struct TeleType *nextaddr;
    struct TeleType *preaddr;
};
void display(struct TeleType *contents);
void displayRev(struct TeleType *contents);
int main()
{
    struct TeleType t1 = {"Acme, Sam", "(555) 898 2392"};
    struct TeleType t2 = {"Dolan, Edith", "(555) 682 3104"};
    struct TeleType t3 = {"Lanfrank, John", "(555) 718 4581"};
    struct TeleType *first;          
    first = &t1;        
    t1.nextaddr = &t2, t1.preaddr = NULL;  
    t2.nextaddr = &t3, t2.preaddr = &t1; 
    t3.nextaddr = NULL, t3.preaddr = &t2;
    display(first);
    displayRev(first);
    return 0;
}
void display(struct TeleType *contents) 
{                                       
    while (contents != NULL)            
    {
        printf("%-30s %-20s\n", contents->name, contents->phoneNum);
        contents = contents->nextaddr; 
    }
}
void displayRev(struct TeleType *contents){
    while (contents->nextaddr != NULL){
        contents = contents->nextaddr;
    }
    while (contents != NULL){
        printf("%-30s %-20s\n", contents->name, contents->phoneNum);
        contents = contents->preaddr;
    }
}