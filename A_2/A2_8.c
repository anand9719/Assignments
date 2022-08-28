// 8. WAP to check the given no. is even or odd using a bitwise operator
#include<stdio.h>
int main()
{
    int n, lb;
    printf("Enter a number: ");
    scanf("%d",&n);
    lb=n&1;
    if (lb == 0)
    {
        printf("Even No.");
    }
    else printf("Odd No.");
    return 0;
}