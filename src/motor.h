//vérifier après tests
//motor A : ENA(pwm),IN4(+),IN3(-)
//motor B : ENB(pwm),IN1(+),IN2(-)

#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>


class Motor 
{
    public:
        Motor(int pwm_pin,int pos_dir_pin,int neg_dir_pin);
        void command(float cmd_speed);    
}


#endif