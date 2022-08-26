// WAP to convert a given string into lowercase
#include <stdio.h>
int main()
{
    char s[1000];
    printf("Enter string: ");
    fgets(s, 1000, stdin);
    for(int i=0; s[i]; i++)
        if(s[i]>='A' && s[i]<='Z')
            s[i] = s[i]+32;
    printf("%s",s);
    return 0;
}