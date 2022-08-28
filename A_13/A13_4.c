// Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int sum_sq(int n)
{
    if(n==0)
        return 0;
    return(n*n +sum_sq(n-1));
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    printf("%d",sum_sq(n));
    return 0;
}