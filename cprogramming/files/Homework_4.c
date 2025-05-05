#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int judge(int a, int b){
    return !(a == 1 && b == 20) && !(a == 9 && b == 19) && !(a == 8 && b == 5) && !(a == 23 && b == 5) && !(a == 21 && b == 16) && !(a == 15 && b == 14);
}
int countletter(){
    srand(time(0));
    int upperbound = 26;
    int a = 1 + (int)rand() % upperbound;
    int b = 1 + (int)rand() % upperbound;
    int cnt = 2;
    while (judge(a,b))
    {
        a = b;
        b = 1 + (int)rand() % upperbound;
        cnt += 1;
    }
    return cnt;
}
int main(){
    printf("The number of letters generated to get the words is %d.\n", countletter());
    return 0;
}