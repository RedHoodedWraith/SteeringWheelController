//
// Created by Asami on 12/06/2022.
// SWC Values defined a resolution of 1 Ohm
//

#ifndef STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H
#define STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H

#define CTRL_VOL_UP 0.149
#define CTRL_VOL_DOWN   0.0565
#define CTRL_MODE   1.039
#define CTRL_SEEK_UP    0.3029
#define CTRL_SEEK_DOWN  0.5630
#define CTRL_IDLE    5.05

#define CONTROL_RES_VAL 9980    // 10 K Ohms
//#define CONTROL_RES_VAL 10000

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
