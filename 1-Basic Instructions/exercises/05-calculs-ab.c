#include <stdio.h>

int main() {
    float a, b;
    float somme, difference, produit, quotient;

    printf("Entrez le premier nombre (a) : ");
    scanf("%f", &a);

    printf("Entrez le deuxieme nombre (b) : ");
    scanf("%f", &b);

    somme = a + b;
    difference = a - b;
    produit = a * b;
    
    if (b != 0) {
        quotient = a / b;
        printf("a + b = %.2f\n", somme);
        printf("a - b = %.2f\n", difference);
        printf("a * b = %.2f\n", produit);
        printf("a / b = %.2f\n", quotient);
    } else {
        printf("a + b = %.2f\n", somme);
        printf("a - b = %.2f\n", difference);
        printf("a * b = %.2f\n", produit);
        printf("Division par zero impossible.\n");
    }

    return 0;
}
