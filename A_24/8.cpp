// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include <iostream>
using namespace std;
inline float area(float);
inline int area(int,int);
inline int area(float,float);
int main()
{
    float r, base, height;
    int lenght, bredth;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle is "<< area(r)<<endl;
    cout<<"Enter lenght & breadth of rectangle: ";
    cin>>lenght>>bredth;
    cout<<"Area of rectangle is "<< area(lenght,bredth)<<endl;
    cout<<"Enter base and height of triangle: ";
    cin>>base>>height;
    cout<<"Area of triangle is "<< area(base,height);
    return 0;
}
float area(float r)
{
    return(3.14*r*r);
}
int area(int l, int b)
{
    return(l*b);
}
int area(float base,float height)
{
    return(0.5*base*height);
}