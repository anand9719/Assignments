//5. Write a function to print first N prime numbers.(TSRN)
#include <stdio.h>
void NPrime(int n)
{
    int i,j,count=1;
    for(i=2;count<=n;i++)
    {
        for(j=2;j<=i;j++)
            if (i%j == 0)
                break;
        if (i==j)
        {
            printf("%d  ",i);
            count++;
        }
    }
}
int main()
{
    int n;
    printf("How many prime numbers, you want to print? ");
    scanf("%d",&n);
    NPrime(n);
    return 0;
}