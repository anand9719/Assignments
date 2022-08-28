// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include <stdio.h>
int main()
{
    char a;
    printf("Enter an alphabet: ");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("UpperCase");
    else if(a>='a' && a<='z')
        printf("LowerCase");
    else
        printf("Invalid character(not an alphabet!)");
    return 0;
}