// 10. WAP to make last digit of a number stored in a variable as zero
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("After making last digit of %d as zero, n = %d",n,(n/10)*10);
    return 0;
}