// Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("How many email, you want to enter? ");
    scanf("%d",&n);
    fflush(stdin);
    char s[n][50];
    printf("Enter %d emails:\n",n);
    for(int i=0; i<n; i++)
        gets(s[i]);
    for(int i=0; i<n; i++)
        if(strchr(s[i],'@') != 0)
            printf("%s\n",s[i]);
    return 0;
}