// WAP to print a string in reverse using a pointer
#include <stdio.h>
#include <string.h>
void reverse(char*, int);
int main()
{
    char s[100];
    printf("Enter string:\n");
    gets(s);
    int l = strlen(s);
    reverse(s,l);
    return 0;
}
void reverse(char*p,int n)
{
    strrev(p);
    printf("%s",p);
}