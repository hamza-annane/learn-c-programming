/**
 * --------------------------------------------------------
 *  Fichier      : echanger_sans_temp.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir deux entiers A et B, échange 
 *                 leurs valeurs sans utiliser de variable 
 *                 intermédiaire, puis affiche les nouvelles 
 *                 valeurs de A et B.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int A, B;

    // Demande des valeurs à l'utilisateur
    printf("Entrez la valeur de A : ");
    scanf("%d", &A);

    printf("Entrez la valeur de B : ");
    scanf("%d", &B);

    // Échange sans variable temporaire (méthode arithmétique)
    A = A + B;
    B = A - B;
    A = A - B;

    // Affichage des nouvelles valeurs
    printf("Après échange :\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}