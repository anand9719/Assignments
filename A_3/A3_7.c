// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter value of a, b, c in quadratic eq.(ax*x+bx+c): ");
    scanf("%d %d %d",&a,&b,&c);
    int d = b*b-4*a*c;
    if(d>0)
        printf("Roots are real & distinct");
    else if(d == 0)
        printf("Roots are real & equal");
    else
        printf("Roots are imaginary");
}