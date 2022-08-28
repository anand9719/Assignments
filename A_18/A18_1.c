// Write a function to calculate length of the string
#include <stdio.h>
#include <string.h>
void strlenght(char s[])
{
    printf("%d",strlen(s));
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    strlenght(s);
    return 0;
}