// Write a recursive function to print first N even natural numbers in reverse order
#include <stdio.h>
void f_n_e_r(int n)
{
    if(n==0)
        return;
    printf("%d ",2*n);
    f_n_e_r(n-1);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_e_r(n);
    return 0;
}