#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, z1;
    double x2, y2, z2;
    double distance;

    // Saisie des coordonnées du premier point
    printf("Entrez x1 : ");
    scanf("%lf", &x1);
    printf("Entrez y1 : ");
    scanf("%lf", &y1);
    printf("Entrez z1 : ");
    scanf("%lf", &z1);

    // Saisie des coordonnées du deuxième point
    printf("Entrez x2 : ");
    scanf("%lf", &x2);
    printf("Entrez y2 : ");
    scanf("%lf", &y2);
    printf("Entrez z2 : ");
    scanf("%lf", &z2);

    // Calcul de la distance
    distance = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) );

    // Affichage du résultat
    printf("La distance entre les deux points est : %.4f\n", distance);

    return 0;
}
