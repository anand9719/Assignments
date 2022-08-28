// 6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    switch (y % 100 == 0)
    {
    case 1:
        switch (y % 400 == 0)
        {
        case 1: printf("leap year");
            break;
        case 0: printf("not an leap year");
            break;
        }
        break;
    case 0:
        switch (y % 4 == 0)
        {
        case 1: printf("leap year");
            break;
        case 0: printf("not an leap year");
            break;
        }
        break;
    default: printf("Invalid year");
    }
    return 0;
}