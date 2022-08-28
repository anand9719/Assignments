// 2. Write a program to print a given number without its last digit.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Number without last digit is %d",x/10);
    return 0;
}