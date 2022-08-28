// Write a program to count the digits of a given number using recursion
#include <stdio.h>
int count=0;
int count_digit(int n)
{
    if(n==0)
        return 1;
    count_digit(n/10);
    count++;
    return count;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Total digit is %d",count_digit(n));
    return 0;
}