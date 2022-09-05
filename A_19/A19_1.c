// WAP to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user
#include <stdio.h>
int main()
{
    char s[5][50];
    int count = 0;
    printf("Enter 5 strings:\n");
    for(int i=0; i<5; i++)
        gets(s[i]);
    for(int i=0; i<5; i++)
    {
        for(int j=0; s[i][j] != '\0'; j++)
            if(s[i][j]=='a'||s[i][j]=='e'||s[i][j]=='i'||s[i][j]=='o'||s[i][j]=='u'||s[i][j]=='A'|| s[i][j]=='E'||s[i][j]=='I'||s[i][j]=='O'||s[i][j]=='U')
                count++;
        printf("%s => %d vowels\n",s[i],count);
        count=0;
    }
    return 0;
}