#ifndef BTS7960_H_
#define BTS7960_H_
#include<Arduino.h>

void BTS_drive(int RPWM, int LPWM, int speed_in_pwm);
void BTS_init(int RPWM, int LPWM);


#endif