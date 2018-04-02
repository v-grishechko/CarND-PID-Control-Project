#include "PID.h"

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    PID::Kp = Kp;
    PID::Ki = Ki;
    PID::Kd = Kd;
    prev_cte = 0;
}

void PID::UpdateError(double cte) {
    integral += cte;

    p_error = -Kp * cte;
    d_error = -Kd * (cte - prev_cte);
    i_error = -Ki * integral;
    prev_cte = cte;
}


double PID::TotalError() {
    return p_error + d_error + i_error;
}

