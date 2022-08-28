// 3. Write a program to check whether a given number is there in the Fibonacci series or not.
#include <stdio.h>
int main()
{
    int n;
    int a = 0, b = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    while(b<n)
    {
        b = a + b;
        a = b - a;
    }
    if (n == b || n == a)
        printf("yes");
    else 
        printf("no");
    return 0;
}