//  Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real
#include <iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int a,b;
    float c,d;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Maximum is "<<max(a,b)<<endl;
    cout<<"Enter two numbers: ";
    cin>>c>>d;
    cout<<"Maximum is "<<max(c,d)<<endl;
    return 0;
}
int max(int a, int b)
{
    return(a>b?a:b);
}
float max(float c,float d)
{
    return(c>d?c:d);
}