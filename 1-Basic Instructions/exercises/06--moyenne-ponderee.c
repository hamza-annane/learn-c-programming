#include <stdio.h>

int main() {
    float nombre1, nombre2, nombre3;
    float moyenne_ponderee;

    printf("Entrez le premier nombre : ");
    scanf("%f", &nombre1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &nombre2);

    printf("Entrez le troisieme nombre : ");
    scanf("%f", &nombre3);

    moyenne_ponderee = (nombre1 * 2 + nombre2 * 3 + nombre3 * 5) / (2 + 3 + 5);

    printf("La moyenne ponderee est : %.2f\n", moyenne_ponderee);

    return 0;
}
