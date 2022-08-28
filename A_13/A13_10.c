// Write a program to calculate the power of any number using recursion
#include <stdio.h>
float power(float n,int p)
{
    if(p==0)
        return 1;
    return(n*power(n,p-1));
}
int main()
{
    float n;
    int p;
    printf("Enter two numbers: ");
    scanf("%f %d",&n,&p);
    printf("%.3f to the power %d is %.3f",n,p,power(n,p));
    return 0;
}