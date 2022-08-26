// WAP to count vowels in a given string
#include <stdio.h>
int main()
{
    char s[1000];
    int count = 0;
    printf("Enter string: ");
    fgets(s, 1000, stdin);
    for(int i=0; s[i]; i++)
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            count++;
    printf("Total %d vowels in string",count);
    return 0;
}