//6. Write a function to print all Prime numbers between two given numbers.(TSRN)
#include <stdio.h>
void AllPrime(int a,int b)
{
    int i,j;
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<=i;j++)
            if (i%j == 0)
                break;
        if (i==j)
            printf("%d  ",i);
    }
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    AllPrime(a,b);
    return 0;
}