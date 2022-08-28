#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, r1, r2, img, discriminant;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b*b) - (4*a*c);
    switch (discriminant > 0)
    {
    case 1:
        r1 = (-b+sqrt(discriminant))/(2*a);
        r2 = (-b-sqrt(discriminant))/(2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f", r1, r2);
        break;
    case 0:
        switch (discriminant < 0)
        {
        case 1:
            r1 = r2 = -b/(2*a);
            img = sqrt(-discriminant)/(2*a);
            printf("Two distinct complex roots exists: %.2f + %.2fi and %.2f - %.2fi",r1,img,r2,img);
            break;
        case 0:
            r1 = r2 = -b/(2*a);
            printf("Two equal and real roots exists: %.2f and %.2f", r1, r2);
            break;
        }
    }
    return 0;
}