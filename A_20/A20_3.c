// Write a function to sort an array of int type values
#include <stdio.h>
void sort(int *, int);
int main()
{
    int n;
    printf("How many numbers, you want to enter? ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a,n);
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);
    return 0;
}
void sort(int *p, int n)
{
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
            if(*(p+i) > *(p+j))
            {
                int t=*(p+i);
                *(p+i) = *(p+j);
                *(p+j) = t;
            }
}