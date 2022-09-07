// Write a function to swap strings of two char arrays of calling functions
#include <stdio.h>
void swap(char**,char**);
int main()
{
    char *a[20],*b[20];
    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    swap(&a,&b);
    printf("%s  %s",a,b);
    return 0;
}
void swap(char**p,char**q)
{
    char*t;
    t = *p;
    *p = *q;
    *q = t;
}