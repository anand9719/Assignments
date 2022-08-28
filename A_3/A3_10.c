// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include <stdio.h>
int main()
{
    float cp, sp, p, l;
    printf("Enter the cost price : ");
    scanf("%f",&cp);
    printf("Enter the selling price : ");
    scanf("%f",&sp);
    p = sp-cp;
    l = cp-sp;
    if (p>0)
        printf("Seller made profit of %.2f %%",(p/cp)*100);
    else if (p<0)
        printf("Seller incurred loss of %.2f %%",(l/cp)*100);
    else
        printf("There is no profit, no loss");
    return 0;
}