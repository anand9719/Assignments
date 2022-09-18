// Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class
#include <iostream>
using namespace std;
class LargestNumber
{
    private:
        int a,b,c,max;
    public:
        void setNumbers(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void largest()
        {
            if(a>b)
            {
                if(a>c)
                    max = a;
                else max = c;
            }
            else
            {
                if(b>c)
                    max = b;
                else max = c;
            }
        }
        int getMax()
        {
            return max;
        }
};
int main()
{
    int p,q,r;
    LargestNumber l;
    cout<<"Enter three numbers: ";
    cin>>p>>q>>r;
    l.setNumbers(p,q,r);
    l.largest();
    cout<<"Largest number is "<<l.getMax();
    return 0;
}