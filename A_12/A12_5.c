// Write a recursive function to print first N even natural numbers
#include <stdio.h>
void f_n_even(int n)
{
    if(n==0)
        return;
    f_n_even(n-1);
    printf("%d ",2*n);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_even(n);
    return 0;
}