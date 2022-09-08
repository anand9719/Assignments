// Write a function to find the highest salary employee from a given array of 10 employees
#include <stdio.h>
#include <limits.h>
struct Employee
{
    int salary;
}e[10];
int maxSalary(struct Employee e[])
{
    int m = INT_MIN;
    for(int i=0; i<10; i++)
        if(e[i].salary > m)
            m = e[i].salary;
    return m;
}
int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("Enter salary of employee %d: ",i+1);
        scanf("%d",&e[i].salary);
    }
    printf("Highest salary is %d",maxSalary(e));
    return 0;
}