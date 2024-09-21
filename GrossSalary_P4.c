#include <stdio.h>
void main()
{
    float basesal, grssal, hra, da;
    printf("Enter Your Base Salary: ");
    scanf("%f", &basesal);
    if (basesal <= 10000)
    {
        hra = 0.2 * basesal;
        da = 0.8 * basesal;
        grssal = basesal + hra + da;
        // printf("HRA: %f",hra);
        // printf("HRA: %f",hra);
        printf("Gross Salary: %f", grssal);
    }
    else if (basesal >= 10001 && basesal <= 20000)
    {
        hra = 0.25 * basesal;
        da = 0.9 * basesal;
        grssal = basesal + hra + da;
        printf("Gross Salary: %f", grssal);
    }
    else
    {
        hra = 0.3 * basesal;
        da = 0.95 * basesal;
        grssal = basesal + hra + da;
        printf("Gross Salary: %f", grssal);
    }
}