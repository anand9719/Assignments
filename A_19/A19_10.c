// Create an authentication system. It should be menu driven
#include <stdio.h>
#include <string.h>
int main()
{
    char a[3][2][20] = {{"saurabh","123"},{"prateek","456"},{"aditya","789"}};
    char username[20],password[20];
    int f = 0;
    printf("Enter username: ");
    gets(username);
    printf("Enter password: ");
    gets(password);
    for(int i=0; i<3; i++)
        if(strcmp(a[i][0],username)==0 && strcmp(a[i][1],password)==0)
        {
            printf("Login Successfull!");
            f=1;
        }
    if(f==0)
        printf("Username or password not match!");
    return 0;
}