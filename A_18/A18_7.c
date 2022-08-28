// Write a function to check whether a given string is palindrome or not
#include <stdio.h>
#include <string.h>
int isPalindrome(char s[])
{
    int i, l=strlen(s);
    for(i=0; i<l/2; i++)
        if(s[i] != s[l-1-i])
            return 0;
    return 1;
}
int main()
{
    char s[50];
    printf("Enter a string: ");
    gets(s);
    if(isPalindrome(s))
        printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}