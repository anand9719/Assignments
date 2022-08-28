#include <stdio.h>
int main()
{
    float u, amount=0, total=0;
    printf("Enter the units: ");
    scanf("%f",&u);
    switch(u<=50)
    {
        case 1: amount=u*0.5;
            break;
        case 0: switch(u<=150)
                {
                    case 1: amount=25+(u-50)*0.75;
                        break;
                    case 0: switch(u<=250)
                            {
                                case 1: amount=100+(u-150)*1.2;
                                    break;
                                case 0: amount=220+(u-250)*1.5;
                                    break;
                            }
                }
    }
    total=amount+amount*0.20;
    printf("Total electricity bill = %.2f Rs.",total);
    return 0;
}