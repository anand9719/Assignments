// Define a function to check whether a given number is a Prime number or not
#include <iostream>
using namespace std;
void prime(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime(n);
    return 0;
}
void prime(int n)
{
    int i;
    for(i=2; i<n; i++)
        if(n%i == 0)
            break;
    if(i == n)
        cout << "Prime number";
    else cout << "Not a prime number";
}