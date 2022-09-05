// WAP to search a string in the list of strings
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("How many strings you want to enter? ");
    scanf("%d",&n);
    fflush(stdin);
    char s1[n][50], s2[50];
    printf("Enter %d strings:\n",n);
    for(int i=0; i<n; i++)
        gets(s1[i]);
    printf("which string, you want to search? ");
    gets(s2);
    for(int i=0; i<n; i++)
    {
        if(strcmp(s1[i],s2) == 0)
            printf("String found!");
        else printf("String not found!");
        break;
    }
    return 0;
}