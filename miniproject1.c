#include <stdio.h>

int main() {
    char noms[50];
    int numero;

  
    int choix;
    void Menu() {
    printf("-------Menu-------\n 1. Ajouter un contact\n 2. Afficher les contacts\n 3. Rechercher un contact\n 4. Supprimer un contact\n 5. Quitter\n");
    printf("Entrez votre choix: ");
    scanf("%d", &choix);
    }
    Menu();
   
    switch (choix) {
        case 1:
            printf("Ajout d'un contact:\n");
            printf("Entrez votre nom: ");
            scanf("%s", noms);
            printf("Entrez votre numero: ");
            scanf("%d", &numero);
            printf("Contact ajoute: Nom: %s, Numero: %d\n", noms, numero);
            break;
        case 2:
            printf("Affichage des contacts...\n");
            printf("Nom: %s, Numero: %d\n", noms, numero);
            break;
        case 3:
            printf("Recherche d'un contact...\n");
            printf("Nom: %s\n" , noms);
            scanf("%s", noms);
            printf("Numero: %d\n", numero);
            scanf("%d", &numero);
            break;
        case 4:
            printf("Selectionnez le contact a supprimer:\n");
            printf("Nom: %s, Numero: %d\n", noms, numero);
            break;
           
        case 5:
            break;
        default:
            printf("Choix invalide.\n");
    }
    Menu();
    return 0;
}
    