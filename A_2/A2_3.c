// 3. Write a program to swap values of two int variables
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("a = %d and b = %d",a,b);
    return 0;
}