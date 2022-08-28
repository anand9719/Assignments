// Write a function to reverse a string word wise
#include <stdio.h>
#include<string.h>
int main()
{
    char s[200], r[200]={""}, word[50];
    int i,j=0;
    printf("Enter string: ");
    gets(s);
    strrev(s);
    strcat(s," ");
    for(i=0; s[i]; i++)
    {
        if(s[i]==' ')
        {
            word[j]='\0';
            strrev(word);
            strcat(r,word);
            strcat(r," ");
            j=0;
        }
        else 
        {
            word[j]=s[i];
            j++;
        }
    }
    printf("%s",r);
    return 0;
}