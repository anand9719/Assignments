// Define a class Date and write a program to Display Date and initialise date object using Constructors
#include <iostream>
using namespace std;
class Date
{
    private:
    int dd,mm,yy;
    public:
    Date(int d,int m,int y)
    {
        dd = d;
        mm = m;
        yy = y;
    }
    void displayDate()
    {
        cout<<dd<<"-"<<mm<<"-"<<yy;
    }
};
int main()
{
    int a,b,c;
    cout<<"Enter date(DD MM YYYY): ";
    cin>>a>>b>>c;
    Date d1(a,b,c);
    d1.displayDate();
    return 0;
}