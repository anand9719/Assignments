// Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include <iostream>
using namespace std;
class Cube
{
    public:
    double s;
    Cube()
    {
        cout<<"Default cons called"<<endl;
    }
    Cube(double x)
    {
        s = x;
        cout<<"Para. cons called"<<endl;
    }
    double volume()
    {
        return(s*s*s);
    }
    ~Cube()
    {
        cout<<"Destructor called"<<s<<endl;
    }
};
int main()
{
    double side;
    Cube c1(3.4);
    Cube c2;
    cout<<"Volume of cube 1 is "<<c1.volume()<<endl;
    cout<<"Enter side of cube: ";
    cin>>c2.s;
    cout<<"Volume of cube 2 is "<<c2.volume()<<endl;
    return 0;
}