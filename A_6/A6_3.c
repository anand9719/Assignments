// 3. Write a program to calculate sum of first N odd natural numbers
#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s=s+(2*i-1);
    printf("Sum is %d",s);
    return 0;
}