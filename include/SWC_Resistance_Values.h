//
// Created by Asami on 12/06/2022.
// Values defined in 0.1 of an Ohm
// 1000000 = 1 kOhm = 1,000 Ohm
// 1,000,000
//

#ifndef STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H
#define STEERINGWHEELCONTROLLER_SWC_RESISTANCE_VALUES_H

#define CTRL_VOL_UP 149000
#define CTRL_VOL_DOWN   565
#define CTRL_MODE   1039
#define CTRL_SEEK_UP    3029
#define CTRL_SEEK_DOWN  5630
#define CTRL_IDLE    5050000

#define CONTROL_RES_VAL 100000
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
