// Write a function to take input employee data from the user
#include <stdio.h>
struct Employee input();
struct Employee
{
    int id;
    char name[20];
    int salary;
};
struct Employee input()
{
    struct Employee e;
    printf("Enter Id, Name and salary of employee:\n");
    scanf("%d",&e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    scanf("%d",&e.salary);
    return e;
}
int main()
{
    input();
    return 0;
}