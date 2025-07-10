/**
 * --------------------------------------------------------
 *  Fichier      : puissance_xy.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir deux réels X et Y, puis calcule 
 *                 et affiche la puissance X^Y (X exposant Y).
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float x; // Base
    float y; // Exposant
    float resultat;

    // Demander à l'utilisateur de saisir la base X
    printf("Entrez la valeur de X : ");
    scanf("%f", &x);

    // Demander à l'utilisateur de saisir l'exposant Y
    printf("Entrez la valeur de Y : ");
    scanf("%f", &y);

    // Calcul de la puissance X^Y
    resultat = pow(x, y);

    // Affichage du résultat
    printf("%.2f puissance %.2f est : %.2f\n", x, y, resultat);

    return 0;
}
