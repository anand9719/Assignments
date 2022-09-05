// WAP to print the strings which are palindrome in the list of strings
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("How many strings you want to enter? ");
    scanf("%d",&n);
    fflush(stdin);
    char s[n][50], s2[50];
    printf("Enter %d strings:\n",n);
    for(int i=0; i<n; i++)
        gets(s[i]);
    printf("Palindrome strings are: \n");
    for(int i=0; i<n; i++)
    {
        int check=1, l=strlen(s[i]);
        for(int j=0; j<l/2; j++)
            if(s[i][j] != s[i][l-1-j])
                check=0;
        if(check == 1)
            printf("%s\n",s[i]);
    }
    return 0;
}