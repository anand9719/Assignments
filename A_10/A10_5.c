//5. Write a function to print first N odd natural numbers.(TSRN)
#include <stdio.h>
void printON(int);
int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    printON(n);
    return 0;
}
void printON(int n)
{
    for(int i=0; i<n; i++)
        printf("%d  ",2*i+1);
}