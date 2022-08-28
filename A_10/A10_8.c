//8. Write a function to calculate the number of arrangements one can make from n items and r selected at a time.(TSRS)
#include <stdio.h>
int nPr(int, int);
int fact(int);
int main()
{
    int n,r;
    printf("Enter velue of n and r: ");
    scanf("%d %d",&n,&r);
    printf("Total number of arrangements are %d",nPr(n,r));
    return 0;
}
int nPr(int n,int r)
{
    return(fact(n)/fact(n-r));
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}