// WAP to store information of 10 students and display them using structure
#include<stdio.h>
struct Student
{
    char name[20];
    int roll_NO;
    int class;
}s[10];
int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("Enter Name, Roll No. & Class of student %d:\n",i+1);
        gets(s[i].name);
        scanf("%d %d",&s[i].roll_NO,&s[i].class);
        fflush(stdin);
    }
    for(i=0; i<10; i++)
        printf("%d. %s  %d  %d\n",i+1,s[i].name,s[i].roll_NO,s[i].class);
    return 0;
}