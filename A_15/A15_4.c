// Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right.
#include <stdio.h>
void rotate_right(int a[],int n,int d)
{
    while (d >= 0)
    {
        int temp = a[0];
        for(int i=0; i<n-1; i++)
            a[i] = a[i+1];
        a[n-1] = temp;
        d--;
    }
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}
void rotate_left(int a[],int n,int d)
{
    while(d >= 0)
    {
        int temp = a[n-1];
        for(int i=n-2; i>=0; i--)
            a[i+1] = a[i];
        a[0] = temp;
        d--;
    }
    for(int i=0; i<n; i++)
        printf("%d ",a[i]);
}
int main()
{
    int n,a[100],i,d;
    char dir;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter %d values: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("How many positions you want to rotate? ");
    scanf("%d",&d);
    printf("In which direction you want to rotate (l or r)? ");
    fflush(stdin);
    scanf("%c",&dir);
    if(dir == 'r')
        rotate_right(a,n,d);
    if(dir == 'l')
        rotate_left(a,n,d);
    return 0;
}