// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class
#include <iostream>
using namespace std;
class ReverseNumber
{
    private:   
        int num, revNum;
    public:
        void setN(int x)
        {
            num = x;
        }
        int getN()
        {
            return num;
        }
        void reverse()
        {
            int r,ans=0;
            while(num != 0)
            {
                r = num%10;
                num = num/10;
                ans = ans*10+r;
            }
            revNum = ans;
        }
        int getReverse()
        {
            return revNum;
        }
};
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    ReverseNumber o;
    o.setN(n);
    cout<<"Reverse of "<<o.getN()<<" is ";
    o.reverse();
    cout<<o.getReverse();
    return 0;
}