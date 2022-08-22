// WAP in C to find the sum of left rows and columns of a matrix
#include <stdio.h>
int main()
{
    int m, n,sum_row, sum_col;
    printf("Enter size of matrix (mxn): ");
    scanf("%dx%d",&m,&n);
    int a[m][n];
    printf("Enter a %dX%d matrix:\n",m,n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<m; i++)
    {
        sum_row=0;
        for(int j=0; j<n; j++)
            sum_row=sum_row+a[i][j];
        printf("Sum of row %d : %d\n",i+1,sum_row);
    }
    for(int i=0; i<n; i++)
    {
        sum_col=0;
        for(int j=0; j<m; j++)
            sum_col=sum_col+a[j][i];
        printf("Sum of column %d : %d\n",i+1,sum_col);
    }
    return 0;
}