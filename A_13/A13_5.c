// Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int sum_digits(int n)
{
    if(n==0)
        return 0;
    return(n%10 + sum_digits(n/10));
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Sum of digits is %d",sum_digits(n));
    return 0;
}