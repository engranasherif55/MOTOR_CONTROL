
#include"L298N.h"
#include"CytronMD10A.h"
#include"BTS7960.h"



int IN1 = PA0; 
int IN2 = PA1; 
int ENA = PA2; 

int DIR = PA3; 
int PWM = PA4; 

int RPWM = PA5; 
int LPWM = PA6; 


void setup() {

  L298N_init(IN1, IN2, ENA); 
  Cytron_init(DIR, PWM); 
  BTS_init(RPWM, LPWM); 


}

void loop() {
  
  L298N_drive(IN1, IN2, ENA, 255);
  delay(1000);
  L298N_drive(IN1, IN2, ENA, -255);
  delay(1000);
  L298N_drive(IN1, IN2, ENA, 0);
  delay(1000);

  Cytron_drive(DIR, PWM, 255);
  delay(1000);    
  Cytron_drive(DIR, PWM, -255);
  delay(1000);
  Cytron_drive(DIR, PWM, 0);
  delay(1000);

  BTS_drive(RPWM, LPWM, 255);
  delay(1000);
  BTS_drive(RPWM, LPWM, -255);
  delay(1000);
  BTS_drive(RPWM, LPWM, 0);
  delay(1000);

}
