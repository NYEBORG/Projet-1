//From Arduino to Processing to Txt or cvs etc.
//import
import processing.serial.*;
import java.text.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  udSerial = new Serial(this, Serial.list()[0], 115200);
  output = createWriter ("Battements.csv");
}

  void draw() {
    
    int m = millis();
    noStroke();          // minuteur
    fill(m % 255);
    rect(25, 25, 50, 50);
    
    
    
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readString();
      
      if (SenVal != null) {
        
        output.print(m);    // afficher la valeur dans le tableau  et afficher le minuteur
        output.print(";");
        output.print(SenVal);
      }
    }
  }

  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }
