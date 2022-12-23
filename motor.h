//vérifier après tests
//motor A : ENA(pwm),IN4(+),IN3(-)
//motor B : ENB(pwm),IN1(+),IN2(-)

#ifndef MOTOR_H
#define MOTOR_H
#include <Arduino.h>

#define motorA_PWM
#define motorB_PWM

#define motorA_dir_pos
#define motorB_dir_pos

#define motorA_dir_neg
#define motorB_dir_neg

class Motor 
{
    public:
        Motor(int pwm_pin,int pos_dir_pin,int neg_dir_pin);
        void init();
        void command(float cmd_speed);
        
    
}


#endif