// WAP to print the elements of an array in reverse order
#include <stdio.h>
void reverse(int*, int);
int main()
{
    int n;
    printf("How many numbers, you want to enter? ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reverse(a,n);
    return 0;
}
void reverse(int*p,int n)
{
    for(int i=n-1; i>=0; i--)
        printf("%d ",p[i]);
}