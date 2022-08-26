// WAP to calculate the length of the string.(without using built-in method)
#include <stdio.h>
int main()
{
    char s[1000];
    int i=0;
    printf("Enter string: ");
    fgets(s, 1000, stdin);
    for(i=0; s[i]; i++);
    printf("Lenght of string is %d",i-1);
    return 0;
}
