// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate number of instance member variables and also define instance member functions to set values for time and display values of time
#include <iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void inputData()
        {
            cout<<"Enter time(hour, min, sec):\n";
            cin>>h>>m>>s;
        }
        void displayData()
        {
            cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
        }
};
int main()
{
    Time t1;
    t1.inputData();
    t1.displayData();
    return 0;
}