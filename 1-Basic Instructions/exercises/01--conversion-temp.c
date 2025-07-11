#include <stdio.h>

int     main()
{
    float celsius;
    float kelvin;

    printf("Entre temperature en Celsius: ");
    scanf("%f",celsius);

    kelvin = celsius + 273.15;

    printf("temprature en Kelvin = %.2f\n",kelvin);

    return 0;
}