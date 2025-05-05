#include <stdio.h>
int main(){
    int numRows;
    printf("Enter the number of rows.\n");
    scanf("%d", &numRows);
    for (int i = 1; i <= (numRows+1)/2; i++){
        for (int j = 1; j <= numRows;j++){
            if (j>=(numRows+1)/2-i+1&&j<=(numRows+1)/2+i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = (numRows+1)/2+1; i <= numRows;i++){
        for (int j = 1; j <= numRows;j++){
            if (j>=i-(numRows+1)/2+1&&j<=(numRows+1)/2+(numRows+1-i)-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}