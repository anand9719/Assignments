// WAP to sort a string array in ascending order
#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    printf("Enter a string: ");
    fgets(s,50,stdin);
    for(int i=0; i<(strlen(s)-1); i++)
    {
        for(int j=i+1; j<strlen(s); j++)
        {
            if(s[i]>s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("%s",s);
    return 0;
}