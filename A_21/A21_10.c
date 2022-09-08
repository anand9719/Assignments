// WAP to enter marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure and display the percentage of each student.
#include<stdio.h>
struct Marks 
{
    char name[20];
    float roll_no, chem, maths, phy;
}s[5];
int main()
{
    int i;
    for(i=0; i<5; i++)
    {
        fflush(stdin);
        printf("%d. Enter Name, Roll.no, Marks of chemistry, maths & physics:\n",i+1);
        gets(s[i].name);
        scanf("%d %f %f %f",&s[i].roll_no,&s[i].chem,&s[i].maths,&s[i].phy);
    }
    for(i=0; i<5; i++)
        printf("Percentage of student %d is %.2f\n",i+1,(s[i].chem+s[i].maths+s[i].phy)/3);
    return 0;
}