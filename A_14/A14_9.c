// WAP to read values in an array and display it in reverse order. Take array values from the user
#include <stdio.h>
int main()
{
    int n,a[20],i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=n-1; i>=0; i--)
        printf("%d ",a[i]);
    return 0;
}