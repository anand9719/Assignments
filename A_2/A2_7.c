// 7. WAP to find position of first 1 in LSB
#include <stdio.h>
int main()
{
    int n, sb = 0;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n!=0)
    {
        sb = n&1;
        count++;
        if(sb == 1)
        {
            printf("Position of 1 in LSB is %d", count);
            break;
        }
        n = n>>1;
    }
    return 0;
}