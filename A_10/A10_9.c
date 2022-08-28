//9. Write a function to check whether a given number contains a given digit or not.(TSRS)
#include <stdio.h>
int check(int, int);
int main()
{
    int n, d, r;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Enter digit: ");
    scanf("%d",&d);
    r = check(n,d);
    if(r==1)
        printf("%d contains %d",n,d);
    else printf("%d not contains %d",n,d);
    return 0;
}
int check(int n, int d)
{
    while(n!=0)
    {
        if(n%10 == d)
            return 1;
        n = n/10;
    }
    return 0;
}