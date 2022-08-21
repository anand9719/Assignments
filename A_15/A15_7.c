// Write a function to count a total number of duplicate elements in an array
#include<stdio.h>
int duplicate(int a[],int n)
{
    int count=0;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if(a[i] == a[j])
                count++;
    return count;
}
int main()
{
    int n,a[100],i;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Total number of duplicate elements is %d",duplicate(a,n));
    return 0;
}