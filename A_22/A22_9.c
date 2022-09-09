// WAP to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr, size;
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
    printf("Memory Allocated Sucessfully!");
    free(ptr);
    return 0;
}