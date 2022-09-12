// Define a function to find the highest value digit in a given number
#include <iostream>
using namespace std;
int highestDigit(int);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << highestDigit(n);
    return 0;
}
int highestDigit(int n)
{
    int r, h=0;
    while(n != 0)
    {
        r = n%10;
        n = n/10;
        if(h<r)
            h = r;
    }
    return h;
}