// WAP to find the largest element using Dynamic Memory Allocation
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int*ptr, size, m = INT_MIN;
    printf("How many numbers, you want to enter? ");
    scanf("%d",&size);
    ptr = (int*)calloc(size,sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory Allocation Failed!");
        return 0;
    }
    printf("Enter %d numbers:\n",size);
    for(int i=0; i<size; i++)
        scanf("%d",(ptr+i));
    for(int i=0; i<size; i++)
        if(m < *(ptr+i))
            m = *(ptr+i);
    printf("Largest element is %d",m);
    free(ptr);
    return 0;
}