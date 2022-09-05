// WAP to calculate sum of all even numbers and sum of all odd numbers, which are stored in an array of size 10. Take array values from the user
#include <stdio.h>
int main()
{
    int a[10], so=0, se=0;
    printf("Enter 10 numbers: ");
    for (int i = 0; i <=9; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            se = se+a[i];
        else so = so+a[i];
    }
    printf("Sum of all even numbers is %d\n",se);
    printf("Sum of all odd numbers is %d",so);
    return 0;
}