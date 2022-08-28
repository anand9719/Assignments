//3. Write a function to check whether a given number is Prime or not.(TSRS)
int prime(int n)
{
    int i;
    for(i=2; i<=n-1; i++)
        if(n%i==0)
            break;
    if(i==n)
        return 0;
    else return 1;
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(prime(n)==0)
        printf("Prime no.");
    else printf("Not an prime no.");
    return 0;
}