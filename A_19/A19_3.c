// WAP to read and display a 2D array of strings in C language
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("How many strings you want to enter? ");
    scanf("%d",&n);
    fflush(stdin);
    char s[n][50];
    printf("Enter %d strings:\n",n);
    for(int i=0; i<n; i++)
        gets(s[i]);
    for(int i=0; i<n; i++)
        printf("%s ",s[i]);
    return 0;
}