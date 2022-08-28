//9. Write a program in C to find the square of any number using the function.
#include <stdio.h>
float square(float n)
{
    return(n*n);
}
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f",&n);
    printf("Square of %.2f is %.2f",n,square(n));
    return 0;
}