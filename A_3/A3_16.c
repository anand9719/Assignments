// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if (c>='a' && c<='z')
        printf("an alphabet (lower case)");
    else if(c>='A' && c<='Z')
        printf("an alphabet (upper case)");
    else if(c>='1' && c<='9')
        printf("a digit");
    else 
        printf("a special character");
    return 0;
}