int coeur_high, coeur_low;
int data[200], i, mapped;

void setup(){ // le setup s'execute 1 seul fois
  //Configure la broche spécifiée pour qu'elle se comporte comme une entrée ou une sortie.
  pinMode(i, OUTPUT); 
  // Pour le processing sketch (115200 c'est le baud (débit de données en bits par seconde) )
Serial.begin(115200);
                     
}

void loop(){ 

//reset le high avant de le regarder,  tout est plus haut que 0
      coeur_high=0;
      coeur_low = 1023;//reset le low, tout est plus petit que 1023
      
// chercher pour l'état bas et l'état haut en dehors des 200 dernières valeurs
      for(i=200; i>0; i--){
        data[i] = data[i-1];// move everything back one, this will leave data[0] empty, but we put the next read there after this
Déplacer le tout de 1 en arrière pour laisser data[0] a vide.
      if coeur_high = 0 || coeur_low = 0 {
        return 0;
      }
       // vérifier que l'on a une valeur supérieur a la somme actuel  
      if(data[i]>coeur_high)
      coeur_high=data[i];
      if(data[i]<coeur_low)
      coeur_low=data[i];
    }
    
    data[0] = analogRead(A0);// data[0] est égal a analag 0
    // Ca lit la tension sur le pin 0 et la met sur une variable val
    mapped = map(data[0], 0, 1023, 0, 600);  
   //met les valeurs et retourne a la ligne(println)
    Serial.println(mapped);
// 5ms x 200 = 1000 d
  delay(5);
  
}
