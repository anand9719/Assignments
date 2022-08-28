//8. Write a function to print PASCAL Triangle.(TSRN)
#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int nCr(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
void pascal(int rows)
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j=0; j<=(rows-i-2);j++)
            printf("  ");
        for(j = 0; j <= i; j++)
            printf("%2d  ",nCr(i,j));
        printf("\n");
    }
}
int main()
{
    int rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    pascal(rows);
    return 0;
}