// Write a function to transform string into uppercase
#include <stdio.h>
#include <string.h>
void strupper(char s[])
{
    printf("%s",strupr(s));
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    strupper(s);
    return 0;
}