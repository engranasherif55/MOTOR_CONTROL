#include"BTS7960.h"

void BTS_init(int RPWM, int LPWM){
    pinMode(RPWM, OUTPUT);
    pinMode(LPWM, OUTPUT);
}

void BTS_drive(int RPWM, int LPWM, int speed_in_pwm){
    // Implementation for BTS7960 motor control
    if(speed_in_pwm>0){
        analogWrite(RPWM, speed_in_pwm);
        analogWrite(LPWM, 0);
    }

    if(speed_in_pwm<0){
        analogWrite(RPWM, 0);
        analogWrite(LPWM, -speed_in_pwm);


    }

    if(speed_in_pwm==0){
        analogWrite(RPWM, 0);
        analogWrite(LPWM, 0);

    }
}

