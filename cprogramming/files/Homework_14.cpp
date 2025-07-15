#include <iostream>
using namespace std;
double area(double r){
    return 3.14 * r * r;
}
double area(double a, double b){
    return a * b;
}
double area(double a, double b, double h){
    return (a + b) * h / 2;
}
int main(){
    printf("The area of the circle with 1 as the radius is %.2f.\n", area(1));
    printf("The area of the rectangle with 2 as the length and 1 as width is %.2f.\n", area(1,2));
    printf("The area of the trapezoid with 1 and 2 as two parallel sides and 2 as the height is %.2f.\n", area(1, 2, 2));
    return 0;
}