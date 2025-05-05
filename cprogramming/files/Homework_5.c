#include <stdio.h>
float pxn(int x, int n){
    if (n == 1){
        return x;
    }
    return pxn(x, n - 1) * x;
}
float fac(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return fac(n - 1) * n;
}
float sinxm(int x, int m){
    if (m == 0){
        return x;
    }
    if (m % 2 == 0)
        return sinxm(x, m - 1) + pxn(x, 2 * m + 1) / fac(2 * m + 1);
    else
        return sinxm(x, m - 1) - pxn(x, 2 * m + 1) / fac(2 * m + 1);
}
int main(){
    int m = 9;
    int x;
    printf("Please enter the x.\n");
    scanf("%d", &x);
    printf("The value of sin x is %f", sinxm(x, m));
    return 0;
}