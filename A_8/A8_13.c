#include <stdio.h>
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        int k='A';
        for (int j = 1; j <= 13; j++)
        {
            if((j<=8-i) || (j>=6+i))
            {
                printf("%c ",k);
                j<7 ? k++:k--;
            }
            else 
            {
                printf("  ");
                if(j==7)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}