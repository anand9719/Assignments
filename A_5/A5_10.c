// 10. Write a program to print a table of N.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printf("Multiplication table of %d :-\n",n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}