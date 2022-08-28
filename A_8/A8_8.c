#include <stdio.h>
int main()
{
    int i, j, k, l;
    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2 - i; j++)
            printf(" ");
        for (k = 1; k <= i+1; k++)
            printf("%d", k);
        for (l = i; l >= 1; l--)
            printf("%d", l);
        printf("\n");
    }
    return 0;
}