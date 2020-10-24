void oitoh() {




//////////////////////////Definir intervalo de tempo entre alimentações////////////

       intervalo= 8*hora;  

     //  intervalo= 10* segundo;

////////////////////////////////////////////////////////////////////////////////

       Serial.print(" Intervalo entre alimentações:");
   Serial.println(intervalo);
   Serial.println();
    Serial.println();
     Serial.println();
  
  //// volta////
    if(pos == 10){
  
  

    
    s.write(pos);
    
    delay (600);
  



Serial.print("posição atual: ");
Serial.print(pos);
Serial.println();
Serial.println();
pos =170;
  }

  s.detach();
  Serial.println("desligado");
     Serial.println();
    Serial.println();
     Serial.println();

delay(intervalo);



  //// vai//////
  if (pos == 170)  {

    
   s.attach(SERVO);
   Serial.println("ligado");
      Serial.println();
    Serial.println();
     Serial.println();
   
    s.write(pos);
      Serial.println("alimentou");
           Serial.println();
    Serial.println();
     Serial.println();
    delay(segundo);
  

Serial.print("posição atual: ");
Serial.print(pos);
Serial.println();
Serial.println();
     Serial.println();
    Serial.println();
     Serial.println();
pos =10;
    
  }

}
