//4. Write a function to find the next prime number of a given number.(TSRS)
#include <stdio.h>
int NextPrime(int n)
{
    for (int i=n+1; i>0; i++)
    {
        int count = 0;
        for (int j=2; j<=i; j++)
            if (i%j == 0)
                count++;
        if (count == 1)
            return i;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Next Prime number is %d",NextPrime(n));
    return 0;
}