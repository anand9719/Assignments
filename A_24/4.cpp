// Define a function to print Pascal Triangle up to N lines
#include <iostream>
using namespace std;
void pascal(int);
int nCr(int, int);
int fact(int);
int main()
{
    int r;
    cout <<"Enter number of lines: ";
    cin >> r;
    pascal(r);
    return 0;
}
void pascal(int r)
{
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<r-i-1; j++)
            cout << "   ";
        for(j=0; j<=i; j++)
            cout << "     "<< nCr(i,j);
        cout << endl;
    }
}
int nCr(int n, int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
int fact(int n)
{
    int f=1;
    for(int i=1; i<=n; i++)
        f = f*i;
    return f;
}