// Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.
#include <iostream>
using namespace std;
class StaticCount
{
    private:
    static int c;
    public:
    static void counter()
    {
        c++;
    }
    static void displayCount()
    {
        cout<<c;
    }
};
int StaticCount::c;
int main()
{
    StaticCount::counter();
    StaticCount::counter();
    StaticCount::counter();
    StaticCount::displayCount();
    return 0;
}