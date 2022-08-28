// Write a function to check whether a given string is an alphanumeric string or not
#include <stdio.h>
#include <string.h>
int alphanum(char s[])
{
    int a=0, d=0;
    for(int i=0; i<strlen(s); i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            a = 1;
        if(s[i]>='0'&&s[i]<='9')
            d = 1;
    }
    if(a == 1 && d == 1)
        return 1;
    else return 0;
}
int main()
{
    char s[100];
    printf("Enter string: ");
    gets(s);
    if(alphanum(s))
        printf("Alphanumeric");
    else printf("Not Alphanumeric");
    return 0;
}