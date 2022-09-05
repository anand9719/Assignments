// WAP that asks the user to enter a username. If the username entered is one of the names in the list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed
#include <stdio.h>
#include <string.h>
int main()
{
    char s[3][20] = {"anand","AnandAgrawal","Anand"}, un[20];
    printf("Enter a username: ");
    gets(un);
    if(strcmp(s[0],un)==0 || strcmp(s[1],un)==0 || strcmp(s[2],un)==0)
    {
        int n, f=1;
        printf("Enter a number: ");
        scanf("%d",&n);
        for(int a=1; a<=n; a++)
            f=f*a;
        printf("Factorial of %d is %d",n,f);
    }
    else
        printf("Username incorrect!");
    return 0;
}