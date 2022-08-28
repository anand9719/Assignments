//11. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter a digit: ");
    scanf("%d",&d);
    printf("Resulting number after append: %d",(n*10+d));
    return 0;
}