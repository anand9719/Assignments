// Write a function to print all unique elements in an array
#include <stdio.h>
#include <stdbool.h>
void unique(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<n; j++)
            if(a[i] == a[j] && i != j)
                count++;
        if(count == 0)
            printf("%d ",a[i]);    
    }
}
int main()
{
    int n, a[100], i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    unique(a, n);
    return 0;
}