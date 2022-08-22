// WAP in C to find the row with maximum number of 1s
#include <stdio.h>
int main()
{
    int m,n,sum, max=0, index, i;
    printf("Enter size of matrix (mxn): ");
    scanf("%dx%d",&m,&n);
    int a[m][n];
    printf("Enter a %dX%d matrix:\n",m,n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<m; i++)
    {
        sum = 0;
        for(int j=0; j<n; j++)
            if(a[i][j] == 1)
                sum = sum+a[i][j];
        if(max<sum)
        {
            max = sum;
            index = i;
        }
    }
    printf("row %d with maximum no. of 1s: ", index+1);
}