// WAP in C to display the lower triangular of a given matrix
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter a %dX%d matrix:\n",n,n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("Lower triangular of given matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(j>i)
                a[i][j] = 0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    return 0;
}