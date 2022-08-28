#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(j<=i-1)
                printf(" ");
            if(j>=i && j<=8-i) 
                printf("*");
        }
        printf("\n");
    }
    return 0;
}