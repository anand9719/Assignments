// Write a recursive function to print reverse of a given number
#include <stdio.h>
void revrese(int n)
{
    if(n==0)
        return;
    printf("%d",n%10);
    revrese(n/10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    revrese(n);
    return 0;
}