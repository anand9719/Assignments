// WAP to find second largest in an array.Take array values from the user
#include <stdio.h>
#include <limits.h>
int main()
{
    int a[20], n, l1=INT_MIN, l2=INT_MIN;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(l1<a[i])
        {
            l2 = l1;
            l1 = a[i];
        }
        else if(l2<a[i] && l1>a[i])
            l2 = a[i];
    }
    printf("Second largest element is %d",l2);
    return 0;
}