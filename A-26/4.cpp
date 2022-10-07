// Define a class Counter and Write a program to Show Counter using Constructor.
#include <iostream>
using namespace std;
class Counter
{
    private:
    static int c;
    public:
    Counter()
    {
        c++;
    }
    static void displayCount()
    {
        cout<<c<<" objects constructed";
    }
};
int Counter::c;
int main()
{
    Counter c1,c2,c3,c4;
    Counter::displayCount();
    return 0;
}