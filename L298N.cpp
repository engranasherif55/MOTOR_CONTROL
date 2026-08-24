#include"L298N.h"

void L298N_init(int IN1, int IN2, int ENA){
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(ENA, OUTPUT);
}

void L298N_drive(int IN1, int IN2, int ENA, int speed_in_pwm){
    
    if(speed_in_pwm>0){
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        analogWrite(ENA, speed_in_pwm);
    }

    if(speed_in_pwm<0){
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        analogWrite(ENA, -speed_in_pwm);


    }

    if(speed_in_pwm==0){
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        analogWrite(ENA, 0);

    }
}

