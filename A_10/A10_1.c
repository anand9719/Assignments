//1. Write a function to calculate the area of a circle.(TSRS)
#include <stdio.h>
float area(float);
int main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f",&r);
    printf("Area of circle is %.2f",area(r));
    return 0;
}
float area(float r)
{
    return(3.14*r*r);
}