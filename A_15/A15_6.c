// Write a function to read n number of values in an array and display it in reverse order
#include <stdio.h>
void reverse(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1; i>=0; i--)
        printf("%d ",a[i]);
}
int main()
{
    int n,a[50];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    reverse(a,n);
    return 0;
}