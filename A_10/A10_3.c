//3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0.(TSRS)
#include <stdio.h>
int isEven(int);
int main()
{
    int n,r;
    printf("Enter a number: ");
    scanf("%d",&n);
    r = isEven(n);
    if(r==1)
        printf("Even");
    else printf("Odd");
    return 0;
}
int isEven(int n)
{
    if(n%2 == 0)
        return 1;
    else return 0;
}