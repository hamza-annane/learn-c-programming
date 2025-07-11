#include <stdio.h>

int main()
{
    char nom[20];
    char prenom[20];
    char adresse_email[30];
    int age;
    char sexe;

    // Saisie des informations
    printf("Prenom: ");
    scanf("%s", prenom);

    printf("Nom: ");
    scanf("%s", nom);

    printf("Adresse Email: ");
    scanf("%s", adresse_email);

    printf("Age: ");
    scanf("%d", &age);

    // Consommer le '\n' restant dans le buffer
    getchar();

    printf("Sexe (M/F): ");
    scanf("%c", &sexe);

    // Affichage des informations
    printf("\n--- Informations Saisies ---\n");
    printf("Prenom         : %s\n", prenom);
    printf("Nom            : %s\n", nom);
    printf("Adresse Email  : %s\n", adresse_email);
    printf("Age            : %d\n", age);
    printf("Sexe           : %c\n", sexe);

    return 0;
}
