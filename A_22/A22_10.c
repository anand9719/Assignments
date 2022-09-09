// Find out the maximum and minimum from an array using dynamic memory allocation in C
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int*ptr, size, max = INT_MIN, min = INT_MAX;
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
    {
        if(max < *(ptr+i))
            max = *(ptr+i);
        if(min > *(ptr+i))
            min = *(ptr+i);
    }
    printf("Maximum is %d & Minimum is %d",max, min);
    free(ptr);
    return 0;
}