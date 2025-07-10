#include <stdio.h>
#include <stdlib.h>

/**
 * --------------------------------------------------------
 *  Fichier      : rectangle_geometry.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir la largeur et la longueur 
 *                 d'un rectangle, puis calcule et affiche 
 *                 le périmètre et la surface.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

int main()
{
    float largeur;   // Largeur du rectangle
    float longueur;  // Longueur du rectangle
    float perimetre; // Périmètre du rectangle
    float surface;   // Surface du rectangle

    // Demander à l'utilisateur de saisir la largeur
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);

    // Demander à l'utilisateur de saisir la longueur
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);

    // Calcul du périmètre (2 × (longueur + largeur))
    perimetre = 2 * (longueur + largeur);

    // Calcul de la surface (longueur × largeur)
    surface = longueur * largeur;

    // Affichage des résultats
    printf("Le perimetre du rectangle est : %.2f\n", perimetre);
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
