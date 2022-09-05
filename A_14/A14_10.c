//WAP to copy the elements of one array into another array.Take array values from the user
#include <stdio.h>
int main()
{
    int n,a[20],b[20],i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values of array 'a': ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array 'b': ");
    for(i=0;i<n;i++)
    {
        b[i] = a[i];
        printf("%d ",b[i]);
    }
    return 0;
}