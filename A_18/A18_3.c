// Write a function to compare two strings
#include <stdio.h>
#include <string.h>
void strcompare(char s1[], char s2[])
{
    printf("%d",strcmp(s1,s2));
}
int main()
{
    char s1[20], s2[20];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    strcompare(s1,s2);
    return 0;
}