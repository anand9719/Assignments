// Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int HCF(int a,int b)
{
    if(b==0)
        return a;
    return(HCF(b,a%b));
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("HCF is %d",HCF(a,b));
    return 0;
}