// Define a class Bank and define member functions to read principal, rate of interest and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor.
#include <iostream>
using namespace std;
class Bank
{
    private:
    int p,y;
    double r,s;
    public:
    Bank(int pr,double roi,int year)
    {
        p = pr;
        r = roi;
        y = year;
    }
    double calSI()
    {
        s = (p*r*y)/100;
        return s;
    }
};
int main()
{
    int prin,year;
    double rate;
    cout<<"Enter principal, rate of interest and year: ";
    cin>>prin>>rate>>year;
    Bank b(prin,rate,year);
    cout<<"Simple interest is "<<b.calSI();
    return 0;
}