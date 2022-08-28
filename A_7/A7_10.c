// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
int main()
{
    int n, m, d; 
    for (int n=1; n<=1000; n++)
    {
        int sum = 0;
        m = n;
        while (m!=0)
        {
            d = m%10;
            sum = sum + (d*d*d);
            m = m/10;
        }
        if(sum == n)
            printf("%d  ",n);
    }
}