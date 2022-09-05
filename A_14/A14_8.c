// WAP to find second smallest in an array.Take array values from the user
#include <stdio.h>
#include <limits.h>
int main()
{
    int a[20], n, s1=INT_MAX, s2=INT_MAX;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(s1>a[i])
        {
            s2 = s1;
            s1 = a[i];
        }
        else if(s2>a[i] && s1<a[i])
            s2 = a[i];
    }
    printf("Second smallest element is %d",s2);
    return 0;
}