// Write a function to find the repeated character in a given string
#include <stdio.h>
#include<string.h>
void repeat(char *s);
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    repeat(s);
    return 0;
}
void repeat(char s[])
{
    int i = 0;
    int f[250] = {0};
    for (i = 0; i < strlen(s); i++)
        f[s[i]]++;
    for (i = 0; i < 250; i++)
        if (f[i] >= 2)
            printf("%c  ",i);
}