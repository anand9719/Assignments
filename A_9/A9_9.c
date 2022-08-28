// 9. Program to Convert even number into its upper nearest odd number using Switch Statement.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:printf("%d",n+1);
                break;
        case 0:printf("%d",n);
    }
    return 0;
}