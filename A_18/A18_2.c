// Write a function to reverse a string
#include <stdio.h>
#include <string.h>
void strreverse(char s[])
{
    printf("%s",strrev(s));
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    strreverse(s);
    return 0;
}