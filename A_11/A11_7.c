//7. Write a function to print first N terms of Fibonacci series.(TSRN)
#include <stdio.h>
void first_n_fib(int n)
{
    int a=0, b=1;
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",a);
        b=a+b;
        a=b-a;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    first_n_fib(n);
    return 0;
}