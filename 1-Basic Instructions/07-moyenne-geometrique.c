#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double totale;
    double moyen_geo;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    totale = (double)(a * b * c);
    moyen_geo = pow(totale, 1.0 / 3.0);

    printf("La moyenne geometrique est : %.4f\n", moyen_geo);

    return 0;
}
