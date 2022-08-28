#include <stdio.h>
#include <stdlib.h>
int main()
{
    char choice;
    int a, b, c;
    while(1)
    {
        printf("a. Check whether a given set of sides of an isosceles triangle or not\n");
        printf("b. Check whether a given set of sides of an right angled triangle or not\n");
        printf("c. Check whether a given set of sides of an equilateral triangle or not\n");
        printf("d. Exit\n");
        printf("Enter your choice:\n");
        fflush(stdin);
        scanf("%c", &choice);
        switch (choice)
        {
        case 'a':
            printf("Enter 3 sides of triangle:\n");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || b == c || c == a)
                printf("isosceles triangle");
            else printf("not an isosceles triangle");
            break;
        case 'b':
            printf("Enter 3 sides of triangle:\n");
            scanf("%d%d%d", &a, &b, &c);
            if (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
                printf("right-angled triangle");
            else printf("not an right-angled triangle");
            break;
        case 'c':
            printf("Enter 3 sides of triangle:\n");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c && c == a)
                printf("equilateral triangle");
            else printf("not an equilateral triangle");
            break;
        case 'd': exit(0);
        default: printf("Invalid choice");
        }
        printf("\n");
    }
    return 0;
}