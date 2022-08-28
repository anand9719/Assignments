// 5. Write a program to check whether two given numbers are co-prime numbers or not
#include <stdio.h>
int main()
{
    int a,b,m,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    m=a<b?a:b;
    for(i=2;i<=m;i++)
        if(a%i==0 && b%i==0)
            break;
    if(i==m+1)
        printf("co-prime");
    else
        printf("not co-prime");
    return 0;
}