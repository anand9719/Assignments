// 1. Write a program to find the Nth term of the Fibonnaci series.
#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        b = a + b;
        a = b - a;
    }
    printf("%dth term of Fibonnaci series is %d",n,a);
    return 0;
}