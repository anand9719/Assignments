// Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc
#include <iostream>
using namespace std;
class Area
{
    float r,a_c;
    int x, l, b, a_s, a_r;
    public:
        void setP_circle(float rad)
        {
            r = rad;
        }
        void setP_sq(int side)
        {
            x = side;
        }
        void setP_rec(int len, int br)
        {
            l = len;
            b = br;
        }
        void circle()
        {
            a_c=3.14*r*r;
        }
        float getCircle()
        {
            return a_c;
        }
        void square()
        {
            a_s=x*x;
        }
        int getSquare()
        {
            return a_s;
        }
        void rectangle()
        {
            a_r=l*b;
        }
        int getRectangle()
        {
            return a_r;
        }
};
int main()
{
    Area circle, square, rectangle;
    float rad;
    int x,l,b;
    cout<<"Enter radius of circle: ";
    cin>>rad;
    circle.setP_circle(rad);
    circle.circle();
    cout<<"Area of circle is "<<circle.getCircle()<<endl;
    cout<<"Enter side of square: ";
    cin>>x;
    square.setP_sq(x);
    square.square();
    cout<<"Area of square is "<<square.getSquare()<<endl;
    cout<<"Enter lenght & bredth of rectangle: ";
    cin>>l>>b;
    rectangle.setP_rec(l,b);
    rectangle.rectangle();
    cout<<"Area of rectangle is "<<rectangle.getRectangle()<<endl;
    return 0;
}