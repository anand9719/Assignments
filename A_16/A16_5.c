// WAP in C to find the sum of left diagonals of a matrix
#include <stdio.h>
int main()
{
    int n, sum_l=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter a %dX%d matrix:\n",n,n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d",&a[i][j]);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(i+j==n-1)
                sum_l = sum_l+a[i][j];
    printf("Sum of left diagonals is %d",sum_l);
    return 0;
}