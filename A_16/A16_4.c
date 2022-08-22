// WAP in C to find the sum of right diagonals of a matrix
#include <stdio.h>
int main()
{
    int n, sum_r=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter a %dX%d matrix:\n",n,n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i == j)
                sum_r = sum_r+a[i][i];
    printf("Sum of right diagonals is %d",sum_r);
    return 0;
}