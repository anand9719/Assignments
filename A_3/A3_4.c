// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if ((n&1) == 0)
        printf("Even No.");
    else
        printf("Odd No.");
    return 0;
}