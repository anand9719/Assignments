// Write a C++ program to calculate an average of 3 numbers
#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    cout << "Average is " << (a+b+c)/3;
    return 0;
}