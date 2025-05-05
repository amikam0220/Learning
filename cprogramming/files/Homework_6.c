#include <stdio.h>
int N;
int sumUpperTriangle(int a[N][N]){
    int sum = 0;
    for (int i = 0; i < N; i++){
        for (int j = i; j < N; j++){
            sum += a[i][j];
        }
    }
    return sum;
}
int sumLowerTriangle(int a[N][N]){
    int sum = 0;
    for (int i = 0; i < N; i++){
        for (int j = 0; j <= i; j++){
            sum += a[i][j];
        }
    }
    return sum;
}
int main(){
    printf("Please enter the size of the square matrix.\n");
    scanf("%d", &N);
    int a[N][N];
    printf("Please enter the elements of the matrix.\n");
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The sum of the upper triangle is %d.\n", sumUpperTriangle(a));
    printf("The sum of the lower triangle is %d.\n", sumLowerTriangle(a));
    return 0;
}