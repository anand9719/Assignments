// WAP to reverse a string
#include <stdio.h>
int main()
{
    char s[100], temp[100];
    int i=0, j=0;
    printf("Enter string: ");
    fgets(s, 100, stdin);
    for(i=0; s[i]; i++);
    for(s[i-1]; i>=0; i--)
    {
        temp[j]=s[i-1];
        j++;
    }
    printf("%s",temp);
    return 0;
}