// alimentador de aquários que libera a comida dos peixes a cada intervalo definido de 8, 12 ou uma hora

// Ardunino uno com um servo motor conectado na porta digital 6 PWM

#include <Servo.h>
 
#define SERVO 6 // Servo conectdo na Porta Digital 6 PWM
 
Servo s; // Variável Servo
int pos; // Posição Servo
unsigned long hora;
unsigned long tempo;
unsigned long segundo;
unsigned long minuto;
unsigned long intervalo;
unsigned long inte;
 
void setup (){
  
  s.attach(SERVO);
  Serial.begin(9600);
  s.write(0); // Inicia motor posição zero
  pos=10;
  tempo= millis;
  segundo= 1000 ;
  minuto= 60*segundo;
  hora= 60*minuto;
  
  delay (segundo);

//////////////////////////Definir intervalo de tempo entre alimentações////////////

      intervalo= 1*minuto;   

////////////////////////////////////////////////////////////////////////////////

  Serial.println("Alimentador ligado");

   Serial.println();
   Serial.println();
   Serial.println();
   Serial.println();
   Serial.println();
}
 
void loop(){

// define qual intervalo deve ser usado entre as ativações do alimentador de peixes
// descomente o período desejado
//  douzeh ();  // douze horas de intervalo
  oitoh ();     // oito horas de intervalo
//  umah ();    // uma hora de intervalo
//  umm ();     // um minuto de intervalo, para testar o funcionamento
}
