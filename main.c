#include <stdio.h>
#include <stdlib.h>


struct donnees {
    int temps;
    int pouls;
};

int main() {
    int size = 0;
    struct donnees *mesDonnees = calloc(0, sizeof(struct donnees));

    FILE *fichier = NULL;
    fichier = fopen("C:\\Users\\MONTET Thomas\\Desktop\\exia\\PROJET\\1\\sketch_181114a\\Battements.csv", "r");

    while (!feof(fichier)) {
        size++;
        struct donnees tempo;
        mesDonnees = realloc(mesDonnees, size * sizeof(mesDonnees));
        fscanf(fichier, "%d;%d",
               &tempo.temps, &tempo.pouls);
        mesDonnees[size - 1] = tempo;
    }

    for (int i = 0; i < size; i++){
        printf("bpm : %d\n", mesDonnees[i].pouls);
    }

    return 0;
}



