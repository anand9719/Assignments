// Define a class Complex to represent a complex number. Declare instance member variables to store real and imaginary part of a complex number, also define instance member functions to set values of complex number and print values of complex number
#include <iostream>
using namespace std;
class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a=x;
            b=y;
        }
        void printData()
        {
            cout<<"real="<<a<<" imag="<<b<<endl;
        }
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    c1.printData();
    return 0;
}