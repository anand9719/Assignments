// WAP to calculate sum of n numbers entered by user using malloc and free
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, sum=0;
    printf("How many numbers, you want to enter? ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    if(p == NULL)
    {
        printf("Memory Allocation Failed!");
        return 0;
    }
    printf("Enter %d numbers:\n",n);
    for(int i=0; i<n; i++)
        scanf("%d",p+i);
    for(int i=0; i<n; i++)
        sum = sum + *(p+i);
    printf("Sum is %d\n",sum);
    free(p);
    return 0;
}