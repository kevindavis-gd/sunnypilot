#pragma once
#include "rednose/helpers/ekf.h"
extern "C" {
void car_update_25(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_24(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_30(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_26(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_27(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_29(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_28(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_update_31(double *in_x, double *in_P, double *in_z, double *in_R, double *in_ea);
void car_err_fun(double *nom_x, double *delta_x, double *out_2375051209617862546);
void car_inv_err_fun(double *nom_x, double *true_x, double *out_2710285719306132662);
void car_H_mod_fun(double *state, double *out_3607812760366407722);
void car_f_fun(double *state, double dt, double *out_1181208788411519121);
void car_F_fun(double *state, double dt, double *out_415529873656966026);
void car_h_25(double *state, double *unused, double *out_3672149836848083845);
void car_H_25(double *state, double *unused, double *out_1460653823089027310);
void car_h_24(double *state, double *unused, double *out_4973576567070818861);
void car_H_24(double *state, double *unused, double *out_4740378856762134116);
void car_h_30(double *state, double *unused, double *out_2825239630598417311);
void car_H_30(double *state, double *unused, double *out_1331314875945787240);
void car_h_26(double *state, double *unused, double *out_6551749219941287385);
void car_H_26(double *state, double *unused, double *out_2280849495785028914);
void car_h_27(double *state, double *unused, double *out_9104455531763908415);
void car_H_27(double *state, double *unused, double *out_843448435854637671);
void car_h_29(double *state, double *unused, double *out_3428555515274894828);
void car_H_29(double *state, double *unused, double *out_2556811162724188704);
void car_h_28(double *state, double *unused, double *out_6737883221136945550);
void car_H_28(double *state, double *unused, double *out_7639210179793719278);
void car_h_31(double *state, double *unused, double *out_8003759010511116835);
void car_H_31(double *state, double *unused, double *out_1491299784965987738);
void car_predict(double *in_x, double *in_P, double *in_Q, double dt);
void car_set_mass(double x);
void car_set_rotational_inertia(double x);
void car_set_center_to_front(double x);
void car_set_center_to_rear(double x);
void car_set_stiffness_front(double x);
void car_set_stiffness_rear(double x);
}