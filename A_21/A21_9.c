// WAP to store information of n students and display them using structure
#include<stdio.h>
struct Student
{
    char name[20];
    int roll_NO;
    int class;
};
int main()
{
    int i,n;
    printf("Number of students: ");
    scanf("%d",&n);
    struct Student s[n];
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Enter Name, Roll No. & Class of student %d:\n",i+1);
        gets(s[i].name);
        scanf("%d %d",&s[i].roll_NO,&s[i].class);
    }
    for(i=0; i<n; i++)
        printf("%d. %s  %d  %d\n",i+1,s[i].name,s[i].roll_NO,s[i].class);
    return 0;
}