// WAP in C to accept a matrix and determine whether it is a sparse or dense matrix
#include <stdio.h>
int main()
{
    int m,n,count = 0;
    printf("Enter size of matrix (mxn): ");
    scanf("%dx%d",&m,&n);
    int a[m][n];
    printf("Enter a %dX%d matrix:\n",m,n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            if(a[i][j] != 0)
                count++;
    if(count>(m*n/2))
        printf("Dense matrix");
    else if(count<(m*n/2))
        printf("Sparse matrix");
    else printf("Neither sparse nor dense");
    return 0;
}