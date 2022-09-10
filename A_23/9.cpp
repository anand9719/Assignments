// Write a C++ program to find the maximum of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    a = a > b ? a : b;
    cout << a << " is maximum";
    return 0;
}