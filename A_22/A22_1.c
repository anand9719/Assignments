// Define a function to input variable length string and store it in an array without memory wastage
#include <stdio.h>
#include <stdlib.h>
char* inputVarLenghtStr()
{
    char c, *str;
    int count=1, i=0;
    str = (char*)malloc(sizeof(char));
    printf("Enter string: ");
    while (c != '\n')
    {
        c = getc(stdin);
        count++;
        str = (char*)realloc(str, count*sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return str;
    free(str);
}
int main()
{
    char*p;
    p = inputVarLenghtStr();
    printf("You entered: %s",p);
    return 0;
}