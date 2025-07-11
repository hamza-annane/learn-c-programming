#include <stdio.h>

int     main()
{
    float km;
    float yards;

    printf("Entre la  la distance en kilometres: ");
    scanf("%f",&km);

    yards = km * 1093.61;

    printf("la distance en yards = %.2f",yards);

    return 0;
}