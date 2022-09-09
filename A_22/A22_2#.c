// WAP to ask the user to input a number of data values then create an array dynamically to accommodate the data values. Now take the input from the user and display the average of data values.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*ptr, size;
    float sum=0;
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
    printf("Average is %.2f",sum/size);
    free(ptr);
    return 0;
}