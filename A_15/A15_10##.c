// Write a function to count the frequency of each element of an array
#include <stdio.h>
void freq(int a[], int n)
{
    int i = 0;
    int f[1000] = {0};
    for (i = 0; i < n; i++)
        f[a[i]]++;
    for (i = 0; i < 100; i++)
        if (f[i] != 0)
            printf("%d -> %d\n",i,f[i]);
}
int main()
{
    int n, a[100], i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d values: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Frequency of each element :\n");
    freq(a, n);
    return 0;
}