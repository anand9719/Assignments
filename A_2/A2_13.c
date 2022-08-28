// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.
#include <stdio.h>
int main()
{
    int n, d, a = 0;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        a = (a * 10) + d;
        n = n / 10;
    }
    printf("After rotate, the number is %d", a);
    return 0;
}