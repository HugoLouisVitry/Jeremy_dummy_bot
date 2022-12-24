
#include "diff_control.h"
#include "config.h"

Controll::init(Motor mot_A, Motor mot_B)
{
    mot_A = mot_A;
    mot_B = mot_B;
}

Controll::move(float cmd_move_speed)
{
    _pwm_move_value = cmd_move_speed;

}

Controll::rotate(float cmd_rot_speed)
{
    _pwm_rot_value = cmd_rot_speed;

}

Controll::stop()
{
    analogWrite(mot_A,ZERO_SPEED);
    analogWrite(mot_B,ZERO_SPEED);
}
