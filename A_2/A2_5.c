// 5. Write a program to input a three-digit number and display the sum of the digits.
#include <stdio.h>
int main()
{
    int n, ld, sum = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    for(int i = 0; i<3; i++)
    {
        ld = n % 10;
        n = n / 10;
        sum = sum + ld;
    }
    printf("Sum of digits is %d",sum);
    return 0;
}