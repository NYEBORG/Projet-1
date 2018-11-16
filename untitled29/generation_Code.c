//
// Created by thoma on 14/11/2018.
//
#include <stdio.h>
#include "menu.h"

//Ecrit dans le fichier param.h en C Arduino
void generation(int a) {

    FILE *fichier = NULL;

    fichier = fopen("D:\\Documents\\Arduino\\main\\param.h", "w+");
    if (fichier != NULL) {
        fprintf(fichier, "#define PARAM_LED %d", a);


        fclose(fichier);
    }
}
//Permet à l'utilisateur d'entrer la fréquence cardiaque et de la mettre dans le C Arduino
void frequence(int b) {
        FILE *fichier = NULL;

        fichier = fopen("D:\\Documents\\Arduino\\main\\param.h", "a");
        if (fichier != NULL) {
            fprintf(fichier, "\n#define RYTHME_COEUR %d", b);

            fclose(fichier);
        }

}
//Permet dde choisir la LED à allumer
void choix_LED(int c) {
    FILE *fichier = NULL;

    fichier = fopen("D:\\Documents\\Arduino\\main\\param.h", "a");
    if (fichier != NULL) {
        fprintf(fichier,
                "\n#define CHOIX_LED %d", c);
        fclose(fichier);
    }
}