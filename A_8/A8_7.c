#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(j<=2-i) 
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}