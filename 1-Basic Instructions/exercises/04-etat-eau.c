#include <stdio.h>

int main()
{
    float celsius;

    printf("Entre la temperature en Celsius: ");
    scanf("%f",&celsius);

    if (celsius < 0)
        printf("Solide\n");
    else if (celsius <= 0 || celsius < 100)
        printf("Liquide\n");
    else
        printf("Gaz\n");
    
    return 0;

}