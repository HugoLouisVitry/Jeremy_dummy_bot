
#include "diff_control.h"
#include "config.h"

Controll::Controll(Motor mot_A, Motor mot_B)
{
    mot_A = mot_A;
    mot_B = mot_B;
}

Controll::move(float cmd_move_speed) // les moteurs tournent dans le même sens
{
    _pwm_move_value = cmd_move_speed; // convertion -> (pwm €[0;255])
    analogWrite(mot_A,_pwm_move_value);
    analogWrite(mot_B,_pwm_move_value);

}

Controll::rotate(float cmd_rot_speed) // les moteurs tournent en ses opposé
{
    _pwm_rot_value = cmd_rot_speed; // conversion
    analogWrite(mot_A,_pwm_rot_value);
    analogWrite(mot_B,-_pwm_rot_value);

}

Controll::stop()
{
    analogWrite(mot_A,ZERO_SPEED);
    analogWrite(mot_B,ZERO_SPEED);
}
