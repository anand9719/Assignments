// Define a function to swap two int variables using call by reference
#include <iostream>
using namespace std;
void swap(int&, int&);
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swap(a,b);
    cout << a <<" "<< b;
    return 0;
}
void swap(int &p,int&q)
{
    int temp = p;
    p = q;
    q = temp;
}