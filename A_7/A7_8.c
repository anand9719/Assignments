// 8. Write a program to find next Prime number of a given number
#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n+1; i > 0; i++)
    {
        int count = 0;
        for (j = 2; j <= i; j++)
            if (i % j == 0)
                count++;
        if (count == 1)
        {
            printf("%d", i);
            break;
        }
    }
    return 0;
}