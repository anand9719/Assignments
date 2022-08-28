// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    int a, b;
    while (1)
    {
        printf("\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. Exit\nEnter your choice: ");
        fflush(stdin);
        scanf("%c", &c);
        switch (c)
        {
        case 'a':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Sum is %d", a + b);
            break;
        case 'b':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Difference is %d", a - b);
            break;
        case 'c':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Product is %d", a * b);
            break;
        case 'd':
            printf("Enter two numbers: ");
            scanf("%d%d", &a, &b);
            printf("Quotient is %d", a / b);
            break;
        case 'e':
            exit(0);
        default:
            printf("Invalid choice");
        }
        printf("\n");
    }
    return 0;
}