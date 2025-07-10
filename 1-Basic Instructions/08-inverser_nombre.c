/**
 * --------------------------------------------------------
 *  Fichier      : inverser_nombre.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir un nombre entier à quatre chiffres, 
 *                 puis affiche ce nombre dans l'ordre inverse 
 *                 sans utiliser de boucle.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int nombre, unite, dizaine, centaine, millier, inverse;

    // Saisie du nombre
    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre);

    // Extraction des chiffres
    unite = nombre % 10;
    dizaine = (nombre / 10) % 10;
    centaine = (nombre / 100) % 10;
    millier = (nombre / 1000) % 10;

    // Reconstruction du nombre inversé
    inverse = (unite * 1000) + (dizaine * 100) + (centaine * 10) + millier;

    // Affichage du résultat
    printf("L'inverse de %d est %d\n", nombre, inverse);

    return 0;
}
