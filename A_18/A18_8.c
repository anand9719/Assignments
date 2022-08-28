// Write a function to count words in a given string
#include <stdio.h>
int count(char s[])
{
    int count=0;
    for(int i=0; s[i]; i++)
        if(s[i]==' ' || s[i]=='\n' || s[i]=='\t')
            count++;
    return count;
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    printf("No. of words: %d",count(s)+1);
    return 0;
}