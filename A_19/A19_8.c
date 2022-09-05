// Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words
#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n, d1, d2, d;
    printf("How many words, you want to enter? ");
    scanf("%d",&n);
    fflush(stdin);
    char s[n][20], w1[20], w2[20];
    printf("Enter %d words:\n",n);
    for(int i=0; i<n; i++)
        gets(s[i]);
    printf("Enter first word: ");
    gets(w1);
    printf("Enter second word: ");
    gets(w2);
    for(int i=0; i<n; i++)
    {
        if(strcmp(s[i],w1)==0)
            d1=i;
        if(strcmp(s[i],w2)==0)
            d2=i;
    }
    printf("Minimum distance of two words is: %d",abs(d2-d1)-1);
}