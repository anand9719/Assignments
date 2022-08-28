// Write a recursive function to print octal of a given decimal number
#include <stdio.h>
void dec_oct(int n)
{
    if(n==0)
        return;
    dec_oct(n/8);
    printf("%d",n%8);
}
int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    dec_oct(n);
    return 0;
}