// WAP in C to copy one string to another string
#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int i,j=0;
    printf("Enter a string: ");
    fgets(s1,50,stdin);
    for(i=0; s1[i]; i++)
    {
        s2[j] = s1[i];
        j++;
    }
    printf("%s",s2);
    return 0;
}