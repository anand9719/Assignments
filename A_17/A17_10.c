// WAP in C to Find the Frequency of Characters
#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i=0, freq[150] = {0};
    printf("Enter a string: ");
    fgets(s,50,stdin);
    for(i=0; i<strlen(s)-1; i++)
        freq[s[i]]++;
    for(i=0; i<150; i++)
        if(freq[i] != 0)
            printf("%c -> %d\n",i,freq[i]);
    return 0;
}