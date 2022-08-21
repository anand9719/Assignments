// Write a function to find greatest number from given array of any size.(TSRS)
#include <stdio.h>
#include <limits.h>
int max(int a[],int n)
{
    int m = INT_MIN;
    for(int i=0; i<n; i++)
        if(a[i]>m)
            m = a[i];
    return m;
}
int main()
{
    int n,a[100],i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Greatest number is %d",max(a,n));
    return 0;
}