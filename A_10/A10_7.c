// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)
#include <stdio.h>
int nCr(int, int);
int fact(int);
int main()
{
    int n,r;
    printf("Enter velue of n and r: ");
    scanf("%d %d",&n,&r);
    printf("Total number of combinations are %d",nCr(n,r));
    return 0;
}
int nCr(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}