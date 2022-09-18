// Define a class Factorial and define an instance member function to find the Factorial of a number using class
#include <iostream>
using namespace std;
class Factorial
{
    private:
        int n,f;
    public:
        void setN(int x)
        {
            n=x;
        }
        int getN()
        {
            return n;
        }
        void calculateFact()
        {
            f=1;
            for(int i=1; i<=n; i++)
                f=f*i;
        }
        int getFact()
        {
            return f;
        }
};
int main()
{
    int num;
    Factorial f;
    cout<<"Enter a number: ";
    cin>>num;
    f.setN(num);
    f.calculateFact();
    cout<<"Factorial of "<<f.getN()<<" is "<<f.getFact();
    return 0;
}