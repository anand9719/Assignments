// Write a function to display employee data
#include<stdio.h>
#include<string.h>
struct Employee input();
struct Employee
{
    int id;
    char name[20];
    int salary;
}e,e1;
struct Employee input()
{
    printf("Enter Id, Name and salary of employee:\n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name)-1] = '\0';
    scanf("%d",&e.salary);
    return e;
}
void display(struct Employee e)
{
    printf("%d  %s  %d",e.id,e.name,e.salary);
}
int main()
{
    e1 = input();
    display(e1);
    return 0;
}