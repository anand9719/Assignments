// 5. Write a program to calculate sum of cubes of first N natural numbers
#include <stdio.h>
int main()
{
    int n,s=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        s=s+(i*i*i);
    printf("Sum is %d",s);
    return 0;
}