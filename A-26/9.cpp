// Define a class Bill and define its member function get() to take detail of customer, calculateBill() function to calculate electricity bill using below tariff :
// Upto 100 unit RS. 1.20 per unit
// From 100 to 200 unit RS. 2 per unit
// Above 200 units RS. 3 per unit.
#include <iostream>
using namespace std;
class Bill
{
    private:
    int c_no, units;
    char c_name[20];
    double bill;
    public:
    void get()
    {
        cout<<"Enter consumer number: ";
        cin>>c_no;
        fflush(stdin);
        cout<<"Enter consumer name: ";
        gets(c_name);
        cout<<"Enter No. of units consumed: ";
        cin>>units;
    }
    void calculateBill() 
    {
        if(units<=100)
            bill = 100*1.2;
        else if(units<=200)
            bill = 100*1.2 + (units-100)*2;
        else if(units>200)
            bill = 100*1.2 + 100*2 + (units-200)*3;
    }
    void displayBill()
    {
        cout<<"Your electricity bill is: "<<bill;
    }
};
int main()
{
    Bill b1;
    b1.get();
    b1.calculateBill();
    b1.displayBill();
    return 0;
}