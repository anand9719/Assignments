// Define a class Rectangle and define an instance member function to find the area of the rectangle
#include <iostream>
using namespace std;
class Area
{
    int l,b,a;
    public:
        void setPara(int x,int y)
        {
            l = x;
            b = y;
        }
        void area()
        {
            a = l*b;
        }
        int getArea()
        {
            return a;
        }
};
int main()
{
    int a,b;
    Area o;
    cout<<"Enter lenght and breadth of rectangle: ";
    cin>>a>>b;
    o.setPara(a,b);
    o.area();
    cout<<"Area of rectangle is "<<o.getArea();
    return 0;
}