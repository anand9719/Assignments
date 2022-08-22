// WAP to calculate the product of two matrices each of order 3x3
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sum;
    printf("Enter 1st 3X3 matrix:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&a[i][j]);
    printf("Enter 2nd 3X3 matrix:\n");
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            scanf("%d",&b[i][j]);
    printf("Product of two matrices:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum = 0;
            for(int k=0; k<3; k++)
                sum = sum + a[i][k]*b[k][j];
            printf("%d  ",sum);
        }
        printf("\n");
    }
    return 0;        
}