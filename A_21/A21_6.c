// Write a function to sort employees according to their names
#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[20];
    int salary;
};
struct Employee input()
{
    struct Employee e;
    scanf("%d",&e.id);
    fflush(stdin);
    gets(e.name);
    scanf("%d",&e.salary);
    return e;
}
void sort(struct Employee e[], int n)
{
    struct Employee temp;
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(e[i].name,e[j].name) == 1)
            {
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
}
void display(struct Employee e)
{
    printf("%d  %s  %d\n",e.id,e.name,e.salary);
}
int main()
{
    int i, n;
    printf("Number of employees: ");
    scanf("%d",&n);
    struct Employee e[n];
    for(i=0; i<n; i++)
    {
        printf("Enter Id, Name & Salary of employee %d:\n",i+1);
        e[i] = input();
    }
    sort(e,n);
    for(i=0; i<n; i++)
        display(e[i]);
    return 0;
}