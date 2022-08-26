// WAP in C to count the total number of alphabets, digits and special characters in a string
#include <stdio.h>
int main()
{
    char s[100];
    int a=0, d=0, sc=0;
    printf("Enter string: ");
    fgets(s, 100, stdin);
    for(int i=0; s[i]; i++)
    {
        if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            a++;
        else if(s[i]>='0' && s[i]<='9')
            d++;
        else sc++;
    }
    printf("Total no. of alphabets: %d\n",a);
    printf("Total no. of digits: %d\n",d);
    printf("Total no. of special characters: %d\n",sc-1);
}