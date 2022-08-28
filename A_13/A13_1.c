// Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int sum(int n)
{
    if(n==0)
        return 0;
    return(n +sum(n-1));
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}