// Define a function to calculate x raised to the power y
#include <iostream>
using namespace std;
float power(float, float);
int main()
{
    float x,y;
    cout << "Enter value of x & y:"<<endl;
    cin >> x >> y;
    cout<<x<<" raised to the power "<<y<<" is "<<power(x,y);
    return 0;
}
float power(float x, float y)
{
    float p = x;
    for(int i=1; i<y; i++)
        p = p*x;
    return p;
}