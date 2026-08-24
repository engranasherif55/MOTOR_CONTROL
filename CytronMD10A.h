#ifndef CYTRONMD10A_H_
#define CYTRONMD10A_H_
#include<Arduino.h>

void Cytron_init(int DIR, int PWM);
void Cytron_drive(int DIR,int PWM,int speed_in_pwm);

#endif