

#include"menu.h"
#include <stdio.h>
#include <stdbool.h>
#include "generationCode.h"
//Affiche le menu
void affich_menu() {
    printf("choisir le mode d'affichage des LEDs"
           "\n1-Toutes"
           "\n2-Une sur Deux"
           "\n3-Une sur Trois"
           "\n4-Une au choix"
           "\n5-En Chenille\n");

}
// Choix du menu.
void choix_menu() {
    int a = 0, b = 0, c = 0;
    //Bool permet de continuer le programme tant que l'utilisateur ne rentre pas un chiffre entre 1 et 5
    bool continuer = false;

    do {
        // l'utilisateur entre un chiffre
        scanf("\n%d", &a);
        //Ce while permet de vider le buffer afin d'éviter de planter le programme si l'on entre des lettres
        while (getchar() != '\n');
        // Le switch case permet de mettre différents modes d'affichage indépendamment les uns des autres
        switch (a) {
            // Chaque case effectue la fonction generation avec une valeur différente
            // generation permet d'écrire dans param.h

            case 1:
                generation(1);
                choix_LED(0);
                continuer = false;
                break;

                case 2:
                generation(2);
                choix_LED(0);
                continuer = false;
                break;
            case 3:
                generation(3);
                choix_LED(0);
                continuer = false;
                break;
             // cas où l'utilisateur choisit la LED à allumer
            case 4:
                generation(4);
                printf("choisir la LED a allumer\n");
                scanf("%d", &c);
                while (getchar() != '\n');
                //choix_Led permet de choisir une LED
                choix_LED(c);
                continuer = false;
                break;
            case 5:
                generation(5);
                choix_LED(0);
                continuer = false;
                break;
             //Default permet de revenir au début du do while si l'utilisateur n'entre pas une valeur entre 1 et 5
            default:
                printf("entre une valeur entre 1 et 5");
                continuer = true;
                break;
        }
    } while (continuer);

    //Choisir la fréquence
    printf("choisir la fréquence du coeur\n");
    scanf("%d", &b);
    frequence(b);

}





