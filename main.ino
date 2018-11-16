#include"coeur.h"
#include"param.h"


//setup les ports de l'arduino sur output du pin 1 a 10
void setup() {
for(int i=1;i<=10;i++){
  pinMode(i, OUTPUT);  
}
}
/*fonction qui execute en boucle le parametre choisie
 * chaque case du switch execute une fonction contenue dans le fichier coeur.c
 */
void loop() {
  switch (PARAM_LED)
  //PARAM_LED est une valeur dans param.h qui est modifier par le code en C
  {
    case 1:
     all_LED();
     break;
     case 2:
     un_sur_deux();
     break;
     case 3:
     un_sur_trois();
     break;
     case 4:
     au_choix();
     break;
     case 5:
     chenille();
     break;
     default:
     break;
     
    }
}
 
