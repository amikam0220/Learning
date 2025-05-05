#include <stdio.h>
#define size 1000
int checkdigit(char i){
    if ((i >= '0' && i <= '9') || (i >= 'a' && i <= 'a' + ('f' - 'a')) || (i >= 'A' && i <= 'A' + ('F' - 'A')))
    {
        return 1;
    }else{
        return 0;
    }
}
int checkpre(char* num){
    if (num[0] == '0' && (num[1] == 'x' || num[1] == 'X')){
        return 1;
    }else{
        return 0;
    }
}
int isvalidHex(char* num){
    int ret = 1;
    int ini = 0;
    if(checkpre(num)){
        ini = 2;
    }
    if (num[ini] == '\0'){
        ret = 0;
        return ret;
    }
    for (int i = ini; num[i] != '\0'; i++)
    {
        if (!checkdigit(num[i]))
        {
            ret = 0;
            return ret;
        }
    }
    return ret;
}
int main(){
    char num[1000];
    char c;
    printf("Please enter the number.\n");
    gets(num);
    int check = isvalidHex(num);
    if (check){
        printf("It is a valid hexadecimal number.\n");
    }else{
        printf("It is an invalid hexadecimal number.\n");
    }
    return 0;
}