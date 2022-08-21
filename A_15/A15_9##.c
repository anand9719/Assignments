// Write a function to merge two arrays of the same size sorted in descending order
#include <stdio.h>
void merge(int a[],int b[],int n,int c[])
{
    int k=0,i=0,j=0;
    while(i<n && j<n)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    while(i<n)
        c[k++]=a[i++];
    while(j<n)
        c[k++]=b[j++];
    for(k=2*n-1;k>=0;k--)
        printf("%d ",c[k]);
}
int main()
{
    int n,i,j, a[50], b[50], c[100];
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter 1st sorted array of size %d: ",n);
    for ( i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Enter 2nd sorted array of size %d: ",n);
    for ( j=0; j<n; j++)
        scanf("%d", &b[j]);
    merge(a,b,n,c);
    return 0;
}