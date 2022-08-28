#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (i == 1 || j == i || j == 10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}