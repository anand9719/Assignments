// WAP to find smallest number stored in an array of size 10. Take array values from the user
#include <stdio.h>
#include <limits.h>
int min(int a[])
{
    int m = INT_MAX;
    for(int i=0; i<=9; i++)
        if(a[i]<m)
            m = a[i];
    return m;
}
int main()
{
    int a[10];
    printf("Enter 10 numbers: ");
    for (int i = 0; i <=9; i++)
        scanf("%d",&a[i]);   
    printf("Smallest number is %d",min(a));
    return 0;
}