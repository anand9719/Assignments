//1. Write a function to calculate LCM of two numbers.(TSRS)
#include <stdio.h>
int lcm(int a,int b)
{
    for (int l=a>b?a:b; l<a*b; l=l+(a>b?a:b))
        if(l%a==0 && l%b==0)
            return l;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("LCM is %d",lcm(a,b));
    return 0;
}