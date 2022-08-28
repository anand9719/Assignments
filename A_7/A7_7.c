// 7. Write a program to print all Prime numbers between two given numbers
#include <stdio.h>
int main()
{
    int n, i, a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Prime numbers between %d and %d are: \n",a,b);
    for (n = a; n < b; n++)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (n == i)
            printf("%d\t", n);
    }
    return 0;
}