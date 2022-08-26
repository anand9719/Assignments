// WAP to count the occurrence of a given character in a given string
#include <stdio.h>
int main()
{
    char s[1000], c;
    int count = 0;
    printf("Enter string: ");
    fgets(s, 1000, stdin);
    printf("Enter a character: ");
    scanf("%c",&c);
    for(int i=0; s[i]; i++)
        if(s[i] == c)
            count++;
    printf("%c occurs %d times in given string",c,count);
    return 0;
}