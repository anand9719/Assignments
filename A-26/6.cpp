// Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include <iostream>
#include <string.h>
using namespace std;
class Student
{
    private:
    char name[20];
    int roll;
    public:
    Student(char n[],int r)
    {
        strcpy(name,n);
        roll = r;
    }
    void displayDetails()
    {
        cout<<"Student Name is "<<name<<" and roll no. is "<<roll;
    }
};
int main()
{
    char sn[20];
    int sr;
    cout<<"Enter your name and roll no.: ";
    gets(sn);
    cin>>sr;
    Student s1(sn,sr);
    s1.displayDetails();
    return 0;
}