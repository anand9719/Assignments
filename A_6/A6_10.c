// 10. Write a program to reverse a given number
#include <stdio.h>
int main()
{
    int n, d, ans = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        d = n % 10;
        n = n / 10;
        ans = ans * 10 + d;
    }
    printf("Reverse of given number is %d",ans);
    return 0;
}