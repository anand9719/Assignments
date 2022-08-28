//10.Write a function to print all prime factors of a given number(TSRN)
#include <stdio.h>
void primeF(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    primeF(n);
    return 0;
}
void primeF(int n)
{
    for(int i=2;n!=1;i++){
        while(n%i == 0)
        {
            printf("%d ",i);
            n=n/i;
        }
    }
}