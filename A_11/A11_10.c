//10. WAP in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function
#include <stdio.h>
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
        f=f*i;
    return f;
}
int main()
{
    int sum=0;
    for (int i = 1; i <=5 ; i++)
        sum = sum + fact(i)/i;
    printf("%d",sum);
    return 0;
}