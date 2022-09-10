// Write a C++ program to calculate the volume of a cuboid
#include <iostream>
using namespace std;
int main()
{
    float l, b, h;
    cout << "Enter lenght, breadth & height of cuboid: ";
    cin >> l >> b >> h;
    cout << "Volume of cuboid is " << l*b*h;
    return 0;
}