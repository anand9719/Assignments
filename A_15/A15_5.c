// Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element
#include<stdio.h>
void adj_duplicate(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
        if(a[i] == a[i+1])
        {
            printf("Adjacent duplicate value is %d",a[i]);
            return;
        }
    printf("No adjacent duplicate values");
}
int main()
{
    int n,a[100],i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    adj_duplicate(a,n);
    return 0;
}