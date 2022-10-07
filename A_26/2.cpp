// Define a class Time to represent a time with instance variables h,m and s to store
// hour, minute and second. Also define following member functions
// a. void setTime(int,int,int)
// b. void showTime()
// c. void normalize()
// d. Time add(Time)
#include <iostream>
using namespace std;
class Time
{
    private:
    int h, m, s;
    public:
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void normalize()
    {
        m = m + s/60;
        s = s%60;
        h = h + m/60;
        m = m%60;
    }
    void showTime()
    {
        cout<<"H:"<<h<<" M:"<<m<<" S:"<<s<<endl;
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        temp.normalize();
        return temp;
    }
};
int main()
{
    Time t1, t2, t3;
    int h1,h2,m1,m2,s1,s2;
    cout<<"Enter time in hr, min & sec: ";
    cin>>h1>>m1>>s1;
    t1.setTime(h1,m1,s1);
    cout<<"Enter time in hr, min & sec: ";
    cin>>h2>>m2>>s2;
    t2.setTime(h2,m2,s2);
    t3 = t1.add(t2);
    t3.showTime();
    return 0;
}