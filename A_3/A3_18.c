// 18. Write a program which takes the month number as an input and display number of days in that month.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the month number(ex.1-12): ");
    scanf("%d",&n);
    if(n == 2)
        printf("28 days");
    else if(n==4 || n==6 || n==9 || n==11)
        printf("30 days");
    else
        printf("31 days");
    return 0;
}