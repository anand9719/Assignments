// Write a recursive function to calculate sum of first N even natural numbers
#include <stdio.h>
int sum_even(int n)
{
    if(n==0)
        return 0;
    return(2*n + sum_even(n-1));
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    printf("%d",sum_even(n));
    return 0;
}