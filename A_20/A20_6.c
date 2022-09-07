// WAP to calculate the length of the string using a pointer
#include <stdio.h>
int lenght(char*);
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    printf("Lenght of string is %d",lenght(s));
    return 0;
}
int lenght(char*p)
{
    int i;
    for(i=0; p[i]; i++);
    return i;
}