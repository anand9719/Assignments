// Define a class Circle and define an instance member function to find the area of the circle
#include <iostream>
using namespace std;
class Area
{
    const float pi=3.14;
    float r,a;
    public:
        void setPara(float x)
        {
            r = x;
        }
        void area()
        {
            a = pi*r*r;
        }
        float getArea()
        {
            return a;
        }
};
int main()
{
    float a;
    Area o;
    cout<<"Enter radius of circle: ";
    cin>>a;
    o.setPara(a);
    o.area();
    cout<<"Area of circle is "<<o.getArea();
    return 0;
}