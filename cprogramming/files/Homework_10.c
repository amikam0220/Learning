#include <stdio.h>
int main()
{
    char *day[7] = {"Monday", "Tuesday", "Wednesday", "Thusday", "Friday", "Saturday", "Sunday"};
    int date;
    printf("Please enter the date.\n");
    scanf("%d", &date);
    if (date <= 30 && date >= 1)
        printf("That day is %s.\n", day[date % 7]);
    else
        printf("Error date.\n");
    return 0;
}