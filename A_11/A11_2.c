//2. Write a function to calculate HCF of two numbers.(TSRS)
#include <stdio.h>
int HCF(int a,int b)
{
    for (int h=a<b?a:b; h>=1; h--)
        if(a%h==0 && b%h==0)
            return h;
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("HCF is %d",HCF(a,b));
    return 0;
}