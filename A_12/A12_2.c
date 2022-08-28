// Write a recursive function to print first N natural numbers in reverse order
#include <stdio.h>
void f_n_nat_rev(int n)
{
    if(n==0) //base condition
        return;
    printf("%d ",n);
    f_n_nat_rev(n-1); //recursive condition
}
int main()
{
    int n;
    printf("Enter value of N: ");
    scanf("%d",&n);
    f_n_nat_rev(n);
    return 0;
}