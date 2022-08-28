// Write a recursive function to print squares of first N natural numbers
#include <stdio.h>
void f_n_nat_sq(int n)
{
    if(n==0)
        return;
    f_n_nat_sq(n-1);
    printf("%d ",n*n);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_nat_sq(n);
    return 0;
}