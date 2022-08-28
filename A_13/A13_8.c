// Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
        return n-1;
    else return(fib(n-2)+fib(n-1));
}
int main()
{
    int i,n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("First %d terms of fibonacci series :\n",n);
    for(int i=1; i<=n; i++)
        printf("%d  ",fib(i));
    return 0;
}