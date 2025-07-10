/**
 * --------------------------------------------------------
 *  Fichier      : convertir_temps.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 de saisir un temps T (en secondes), 
 *                 puis le convertit et l'affiche sous la 
 *                 forme heures, minutes et secondes.
 * 
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * --------------------------------------------------------
 */

#include <stdio.h>

int main() {
    int T, heures, minutes, secondes;

    // Demande de la durée en secondes
    printf("Entrez le temps en secondes : ");
    scanf("%d", &T);

    // Conversion
    heures = T / 3600;
    minutes = (T % 3600) / 60;
    secondes = T % 60;

    // Affichage du résultat
    printf("%d secondes => %d heures %d minutes %d secondes.\n", T, heures, minutes, secondes);

    return 0;
}
