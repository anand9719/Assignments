// Define a class Box and write a program to enter length, breadth and height and initialise objects using constructor also define member functions to calculate volume of the box.
#include <iostream>
using namespace std;
class Box
{
    private:
    int l,b,h,vol;
    public:
    Box(int len,int bred, int height)
    {
        l = len;
        b = bred;
        h = height;
    }
    int calVolume()
    {
        vol = l*b*h;
        return vol;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter lenght, breadth, height of box: ";
    cin>>a>>b>>c;
    Box b1(a,b,c);
    cout<<"Volume of box is "<<b1.calVolume();
    return 0;
}