// 4. Write a program to calculate HCF of two numbers
#include <stdio.h>
int main()
{
    int a,b,h;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    h=a<b?a:b;
    for(h;h>=1;h--)
        if(a%h==0 && b%h==0)
            break;
    printf("HCF is %d",h);
    return 0;
}