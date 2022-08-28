// 6. Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int n, i;
    printf("Prime numbers under 100 are: \n");
    for (n = 1; n < 100; n++)
    {
        for (i = 2; i < n; i++)
            if (n % i == 0)
                break;
        if (n == i)
            printf("%d\t", n);
    }
    return 0;
}