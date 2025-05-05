#include <stdio.h>
int main(){
    int year, weightclass;
    double weight, fee;
    scanf("%d%lf", &year, &weight);
    if (year <= 1970){
        if (weight < 2700){
            weightclass = 1;
            fee = 16.50;
        }else if (weight <= 3800){
            weightclass = 2;
            fee = 25.50;
        }else {
            weightclass = 3;
            fee = 46.50;
        }
    }else if (year <= 1979){
        if (weight < 2700)
        {
            weightclass = 4;
            fee = 27.00;
        }
        else if (weight <= 3800)
        {
            weightclass = 5;
            fee = 30.50;
        }
        else
        {
            weightclass = 6;
            fee = 52.50;
        }
    }else {
        if (weight < 3500){
            weightclass = 7;
            fee = 35.50;
        }else{
            weightclass = 8;
            fee = 65.50;
        }
    }
    printf("The weight class is %d, and the fee is $%.2lf", weightclass, fee);
    return 0;
}