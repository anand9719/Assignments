// Define a function to check whether a given number is a term in a Fibonacci series or not
#include <iostream>
using namespace std;
void fib(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    fib(n);
    return 0;
}
void fib(int n)
{
    int a=0, b=1;
    while(b<n)
    {
        b = a+b; 
        a = b-a;
    }
    if(n == a || n == b)
        cout << "yes";
    else cout << "no";
}