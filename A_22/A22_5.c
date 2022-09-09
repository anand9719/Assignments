// WAP to print sum of all elements along with inputted array elements using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr, size, sum=0;
    printf("Enter size of array: ");
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
        sum = sum + *(ptr+i);
    printf("Sum of all elements is %d",sum);
    free(ptr);
    return 0;
}