//2. Write a function to calculate simple interest.(TSRS)
#include <stdio.h>
float si(int, int, float);
int main()
{
    int p, n;
    float r;
    printf("Enter values of p,n,r\n");
    scanf("%d %d %f", &p, &n, &r);
    printf("simple interest = %f",si(p,n,r));
    return 0;
}
float si(int p, int n, float r)
{
    return(p*n*r/100);
}