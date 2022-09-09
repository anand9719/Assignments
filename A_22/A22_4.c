// WAP to input and print text using dynamic memory allocation
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char*p, c;
    int i=0, count=1;
    p = (char*)malloc(sizeof(char));
    printf("Input text: ");
    while (c != '\n')
    {
        c = getc(stdin);
        count++;
        p = (char*)realloc(p, count*sizeof(char));
        p[i] = c;
        i++;
    }
    p[i+1] = '\0';
    printf("%s",p);
    free(p);
    return 0;
}