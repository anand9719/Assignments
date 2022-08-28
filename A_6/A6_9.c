// 9. Write a program to calculate LCM of two numbers
#include <stdio.h>
int main()
{
    int a,b,l;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    l = a>b?a:b;
    for (l; l<=a*b; l++)
        if(l%a==0 && l%b==0)
            break;
    printf("LCM of %d and %d is %d",a,b,l);
    return 0;
}