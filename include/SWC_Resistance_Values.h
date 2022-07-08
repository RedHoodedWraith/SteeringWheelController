//
// Created by Asami on 12/06/2022.
// SWC Values defined a resolution of 1 Ohm
//

#ifndef STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H
#define STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H

#define CTRL_VOL_UP 149.0
#define CTRL_VOL_DOWN   56.5
#define CTRL_MODE   1039.0
#define CTRL_SEEK_UP    302.9
#define CTRL_SEEK_DOWN  563.0
#define CTRL_IDLE    5050.0

#define CONTROL_RES_VAL 9980.0    // 10 K Ohms
//#define CONTROL_RES_VAL 10000

#define ERROR_TOLERANCE   10.0    // 10 Ohms

enum SWC_CONTROL_OPT {
    VOL_UP,
    VOL_DOWN,
    MODE,
    SEEK_UP,
    SEEK_DOWN,
    IDLE,
    ERR_NO_SIG
};

static const char *SWC_CONTROL_OPT_STR[] = {"VOL_UP", "VOL_DOWN", "MODE", "SEEK_UP", "SEEK_DOWN",
                                            "IDLE", "NO SIGNAL or ERROR"};

#endif //STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H
