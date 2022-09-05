// WAP to sort 10 city names stored in two dimensional arrays, taken from the user
#include <stdio.h>
#include <string.h>
int main()
{
    char s[10][20], temp[15];
    printf("Enter 10 city names:\n");
    for(int i=0; i<10; i++)
        gets(s[i]);
    for(int i=0; i<9; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(strcmp(s[i],s[j]) > 0)
            {
                strcpy(temp,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],temp);
            }
        }
    }
    for(int i=0; i<10; i++)
        printf("%s  ",s[i]);
    return 0;
}