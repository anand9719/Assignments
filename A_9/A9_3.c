// 3. Write a program which takes the day number of a week and displays unique greeting message for the day.
#include <stdio.h>
int main()
{
    int d;
    printf("Enter a day number: ");
    scanf("%d",&d);
    switch (d)
    {
    case 1:
        printf("Today is monday!");
        break;
    case 2:
        printf("Today is tuesday!");
        break;
    case 3:
        printf("Today is wednesday!");
        break;
    case 4:
        printf("Today is thrusday!");
        break;
    case 5:
        printf("Today is friday!");
        break;
    case 6:
        printf("Today is saturday!");
        break;
    case 7:
        printf("Today is sunday!");
        break;
    default: printf("Invalid input");
    }
    return 0;
}