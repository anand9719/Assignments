// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes
#include<iostream>
using namespace std;
class Greatest
{
    int a,b,c,max;
public:
    void setA(int x)
    {
        a=x;
    }
    void setB(int x)
    {
        b=x;
    }
    void setC(int x)
    {
        c=x;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
    void calcMax()
    {
        if(a>b)
        {
            if(a>c)
                max=a;
            else
                max=c;
        }
        else
        {
            if(b>c)
                max=b;
            else
                max=c;
        }
    }
    int getMax()
    {
        return max;
    }
};
int main()
{
    Greatest g1;
    g1.setA(4);
    g1.setB(2);
    g1.setC(1);
    g1.calcMax();
    cout<<"Greatest among "<<g1.getA()<<" , "<<g1.getB()<<" and "<<g1.getC()<<" is "<<g1.getMax();
    return 0;
}
