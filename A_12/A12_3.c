// Write a recursive function to print first N odd natural numbers
#include <stdio.h>
void f_n_odd(int n)
{
    if(n==0)
        return;
    f_n_odd(n-1);
    printf("%d ",2*n-1);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_odd(n);
    return 0;
}