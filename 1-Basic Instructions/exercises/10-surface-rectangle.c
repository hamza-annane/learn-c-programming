#include <stdio.h>

int main()
{
    float longueur, largeur,surface;

    printf("Entre la longueur:");
    scanf("%f",&longueur);
    printf("Entre la  largeur:");
    scanf("%f",&largeur);

    surface = longueur * largeur;

    printf("la surface d'un rectangle = %.2f \n",surface);

    return 0;
}