// Write functions using function overloading to add two numbers having different data types
#include <iostream>
using namespace std;
inline int add(int,int);
inline float add(float,float);
inline double add(double,double);
int main()
{
    int a,b;
    float c,d;
    double e,f;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter two numbers: ";
    cin>>c>>d;
    cout<<"Sum is "<<add(c,d)<<endl;
    cout<<"Enter two numbers: ";
    cin>>e>>f;
    cout<<"Sum is "<<add(e,f)<<endl;
    return 0;
}
int add(int a,int b)
{
    return(a+b);
}
float add(float c,float d)
{
    return(c+d);
}
double add(double e,double f)
{
    return(e+f);
}