#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * ------------------------------------------------------
 *  Fichier      : age_calculator.c
 *  Description  : Ce programme demande à l'utilisateur 
 *                 son année de naissance, puis calcule 
 *                 et affiche son âge.
 *  Auteur       : Hamza Annane
 *  Date         : 10 juillet 2025
 * ------------------------------------------------------
 */

int main()
{
    int today_year = 2025;     // L'année actuelle (statique)
    int naissance;             // L'année de naissance saisie par l'utilisateur
    int age;                   // L'âge calculé

    // Demander à l'utilisateur son année de naissance
    printf("Entrez votre année de naissance: ");
    scanf("%d", &naissance);

    // Calcul de l'âge
    age = today_year - naissance;

    // Affichage du résultat
    printf("Votre âge est : %d ans\n", age);

    return 0;
}
