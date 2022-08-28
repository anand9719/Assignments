#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        int k='A';
        for (int j = 1; j <= 9; j++)
        {
            if((j>=6-i) && (j<=4+i))
            {
                printf("%c ",k);
                j<5 ? k++:k--;
            }
            else printf("  ");
        }
        printf("\n");
    }
    return 0;
}