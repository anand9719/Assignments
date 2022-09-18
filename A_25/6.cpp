// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called
#include <iostream>
using namespace std;
class Square
{
    private:
        int n,s;
        static int count;
    public:
        void setN(int x)
        {
            n = x;
        }
        int getN()
        {
            return n;
        }
        void square()
        {
            s = n*n;
            count++;
        }
        int getSquare()
        {
            return s;
        }
        static int getCount()
        {
            return count;
        }
};
int Square::count;
int main()
{
    int n;
    Square s;
    cout<<"Enter a number: ";
    cin >> n;
    s.setN(n);
    s.square();
    s.square();
    s.square();
    cout<<"Square of "<<s.getN()<<" is "<<s.getSquare()<<endl;
    cout<<"Square function called "<<Square::getCount()<<" time";
    return 0;
}