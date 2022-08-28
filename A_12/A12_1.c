// Write a recursive function to print first N natural numbers
#include <stdio.h>
void f_n_natural(int n)
{
    if(n==0)
        return;
    f_n_natural(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_natural(n);
    return 0;
}