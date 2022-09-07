// WAP to count number of vowels and consonants in a string using a pointer
#include <stdio.h>
#include <string.h>
void vowelConsonant(char*);
int main()
{
    char str[100];
    printf("Enter string: ");
    gets(str);
    vowelConsonant(str);
    return 0;
}
void vowelConsonant(char*s)
{
    int v=0, c=0;
    for(int i=0; s[i]; i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            v++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
            c++;
    }
    printf("Vowels = %d, Consonants = %d",v,c);
}