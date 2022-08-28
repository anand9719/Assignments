// 2. Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ",a);
        b = a + b;
        a = b - a;
    }
    return 0;
}