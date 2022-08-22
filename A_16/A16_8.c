// WAP in C to display the upper triangular of a given matrix
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
    printf("Upper triangular of given matrix:\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>j)
                a[i][j] = 0;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}