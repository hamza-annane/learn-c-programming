#include <stdio.h>
#include <math.h>

int main() {
    double r, volume;
    const double PI = 3.141592653589793;

    // Saisie du rayon
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &r);

    // Calcul du volume
    volume = (4.0 / 3.0) * PI * pow(r, 3);

    // Affichage du résultat
    printf("Le volume de la sphère est : %.4f\n", volume);

    return 0;
}
