// From the list of IP addresses, check whether all ip addresses are valid
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("How many IP addresses, you want to enter? ");
    scanf("%d", &n);
    fflush(stdin);
    char s[n][50];
    printf("Enter %d IP addresses:\n", n);
    for (int i = 0; i < n; i++)
        gets(s[i]);
    for (int i = 0; i < n; i++)
    {
        int countVal=0, countDot = 0;
        char *a = strtok(s[i], ".");
        while (a != NULL)
        {
            int x = atoi(a);
            if (x >= 0 && x <= 255)
                countVal++;
            a = strtok(NULL, ".");
            countDot++;
        }
        if (countDot == 4 && countVal == 4)
            printf("%d : Valid IP address!\n",i+1);
        else
            printf("%d : Invalid IP address!\n",i+1);
    }
    return 0;
}