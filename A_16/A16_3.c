// WAP in C to find the transpose of a given matrix
#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter size of matrix (mxn): ");
    scanf("%dx%d",&m,&n);
    int a[m][n];
    printf("Enter a %dX%d matrix:\n",m,n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    printf("Transpose of given matrix: \n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            printf("%d  ",a[j][i]);
        printf("\n");
    }
    return 0;
}