// Write a function to transform string into lowercase
#include <stdio.h>
#include <string.h>
void strlower(char s[])
{
    printf("%s",strlwr(s));
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    strlower(s);
    return 0;
}