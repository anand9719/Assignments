// 9. Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int n,m,d,sum=0;
    printf("Enter a number ");
    scanf("%d",&n);
    m=n;
    while (n>0)
    {
        d=n%10;
        sum = sum+(d*d*d);
        n=n/10;
    }
    if (sum == m)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}