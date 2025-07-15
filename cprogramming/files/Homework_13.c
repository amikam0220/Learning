#include <stdio.h>
#include <string.h>
#define MAXsize 10000
char upperToLower(char letter);
char lowerToUpper(char letter);
int isUpper(char letter);
int isLower(char letter);
int main(){
    char str[MAXsize];
    printf("Please enter the string.\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++){
        if (isUpper(str[i])){
            str[i] = upperToLower(str[i]);
        }else if (isLower(str[i])){
            str[i] = lowerToUpper(str[i]);
        }
    }
    puts(str);
    return 0;
}
char upperToLower(char letter){
    return letter | 32;
}
char lowerToUpper(char letter){
    return letter & 223;
}
int isUpper(char letter){
    return ((letter >= 'A') && (letter <= 'Z'));
}
int isLower(char letter){
    return ((letter >= 'a') && (letter <= 'z'));
}