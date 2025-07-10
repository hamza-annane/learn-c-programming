/**
 * --------------------------------------------------------
 *  Fichier      : operations_reels.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir deux nombres réels, puis 
 *                 calcule et affiche leur somme, produit, 
 *                 différence et division.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>

int main()
{
    float a;         // Premier nombre réel
    float b;         // Deuxième nombre réel
    float somme;     // a + b
    float produit;   // a * b
    float difference; // a - b
    float division;  // a / b

    // Demander à l'utilisateur de saisir le premier nombre
    printf("Entrez le premier nombre réel : ");
    scanf("%f", &a);

    // Demander à l'utilisateur de saisir le deuxième nombre
    printf("Entrez le deuxième nombre réel : ");
    scanf("%f", &b);

    // Calcul des opérations
    somme = a + b;
    produit = a * b;
    difference = a - b;

    // Vérifier si b est différent de zéro pour éviter la division par zéro
    if (b != 0)
    {
        division = a / b;
        printf("La division de %.2f par %.2f est : %.2f\n", a, b, division);
    }
    else
    {
        printf("Erreur : division par zéro impossible.\n");
    }

    // Afficher les autres résultats
    printf("La somme est : %.2f\n", somme);
    printf("Le produit est : %.2f\n", produit);
    printf("La différence est : %.2f\n", difference);

    return 0;
}
