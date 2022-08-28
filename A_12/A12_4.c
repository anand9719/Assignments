// Write a recursive function to print first N odd natural numbers in reverse order
#include <stdio.h>
void f_n_o_r(int n)
{
    if(n==0)
        return;
    printf("%d ",2*n-1);
    f_n_o_r(n-1);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_o_r(n);
    return 0;
}