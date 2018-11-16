

#include "coeur.h"
#include "param.h"


//Fonction Une led sur deux allumé

void un_sur_deux() {
  for(int j=1;j<=10;j=j+2){
  digitalWrite(j, HIGH);   
  } 
  //RYTHME_COEUR et egalement modifier directement dans param.h
  delay(RYTHME_COEUR);
   for(int j=1;j<=10;j=j+2){
  digitalWrite(j, LOW);
  
   }
   for(int j=2;j<=10;j=j+2){
  digitalWrite(j, HIGH);  
}
delay(RYTHME_COEUR);
for(int j=2;j<=10;j=j+2){
  digitalWrite(j, LOW);
}
 }
  

//Fonction une led sur trois allumé
 
  void un_sur_trois() {
  for(int j=4;j<=10;j=j+3){
  digitalWrite(j, HIGH);   
  } 
  delay(RYTHME_COEUR);
   for(int j=4;j<=10;j=j+3){
  digitalWrite(j, LOW);
  
   }
   for(int j=0;j<=10;j=j+3){
  digitalWrite(j, HIGH);  
}
delay(RYTHME_COEUR);
for(int j=0;j<=10;j=j+3){
  digitalWrite(j, LOW);
}
 for(int j=2;j<=10;j=j+3){
  digitalWrite(j, HIGH);  
}
delay(RYTHME_COEUR);
for(int j=2;j<=10;j=j+3){
  digitalWrite(j, LOW);
}
 }

//Fonction led au choix a finir

  void au_choix() {
  digitalWrite(CHOIX_LED, HIGH);
  delay(RYTHME_COEUR);
  digitalWrite(CHOIX_LED, LOW);
  delay(RYTHME_COEUR);
 } 

//Fonction mode chenille

void chenille() {
  for(int j=1;j<=10;j++){
  digitalWrite(j, HIGH);   
  delay(RYTHME_COEUR);                     
  digitalWrite(j, LOW);    
  delay(RYTHME_COEUR); 
  }  
}

//Fonction toutes les LEDs allumées

void all_LED(){
  for(int i=1;i<=10;i++){
    digitalWrite(i, HIGH);
    }
    delay(RYTHME_COEUR);
    for(int i=1;i<=10;i++){
    digitalWrite(i, LOW);
    }  
    delay(RYTHME_COEUR);
  }
  
  
 
 
 
