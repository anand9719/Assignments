// WAP to find the maximum number between two numbers using a pointer
#include <stdio.h>
int max(int*,int*);
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Maximum number is %d",max(&a,&b));
    return 0;
}
int max(int*p,int*q)
{
    return (*p>*q ? *p : *q);
}