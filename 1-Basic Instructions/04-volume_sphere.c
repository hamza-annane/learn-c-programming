/**
 * --------------------------------------------------------
 *  Fichier      : volume_sphere.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir le rayon d'une sphère, puis 
 *                 calcule et affiche le volume de cette sphère.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>
#include <math.h>

int main()
{
    float rayon;     // Rayon de la sphère
    float volume;    // Volume de la sphère
    const float PI = 3.14159265;

    // Demander à l'utilisateur de saisir le rayon
    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);

    // Calcul du volume : (4/3) * π * r^3
    volume = (4.0 / 3.0) * PI * pow(rayon, 3);

    // Affichage du volume
    printf("Le volume de la sphère est : %.2f\n", volume);

    return 0;
}
