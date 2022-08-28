// Write a recursive function to print binary of a given decimal number
#include <stdio.h>
void dec_bin(int n)
{
    if(n==0)
        return;
    dec_bin(n/2);
    printf("%d",n%2);
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    dec_bin(n);
    return 0;
}