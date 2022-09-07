// WAP to compute the sum of all elements in an array using pointers
#include <stdio.h>
int sum(int*, int);
int main()
{
    int n;
    printf("How many numbers, you want to enter? ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Sum of all elements is %d",sum(a,n));
    return 0;
}
int sum(int*p,int n)
{
    int s=0;
    for(int i=0; i<n; i++)
        s = s + p[i];
    return s;
}