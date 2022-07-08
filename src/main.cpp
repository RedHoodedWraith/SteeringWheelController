#include <Arduino.h>
#include "SWC_Resistance_Values.h"

int signal_pin = 0;
int raw = 0;
int supplied_voltage = 5;
float manipulated_voltage = 0;
float CONTROL_RES = CONTROL_RES_VAL;
float swc_val = 0;
float buffer = 0;
SWC_CONTROL_OPT swc_opt = IDLE;

void reportReadings() {
    Serial.print("manipulated_voltage: ");
    Serial.println(manipulated_voltage);
    Serial.print("Constant Resistance: ");
    Serial.println(CONTROL_RES);
    Serial.print("swc_val: ");
    Serial.println(swc_val);
    Serial.print("SWC Control:");
    Serial.println(SWC_CONTROL_OPT_STR[swc_opt]);
    Serial.println();
}

void updateReadings() {
    raw = analogRead(signal_pin);
    buffer = raw * supplied_voltage;
    manipulated_voltage = (buffer) / 1024;
    buffer = (supplied_voltage / manipulated_voltage) - 1;
    swc_val = CONTROL_RES * buffer;
}

void checkSWC() {
    if(swc_val == CTRL_IDLE) {
        swc_opt = IDLE;
        return;
    }

    if(swc_val == CTRL_VOL_UP) {
        swc_opt = VOL_UP;
        return;
    }

    if(swc_val == CTRL_VOL_DOWN) {
        swc_opt = VOL_DOWN;
        return;
    }

    if(swc_val == CTRL_MODE) {
        swc_opt = MODE;
        return;
    }

    if(swc_val == CTRL_SEEK_UP) {
        swc_opt = SEEK_UP;
        return;
    }

    if(swc_val == CTRL_SEEK_DOWN) {
        swc_opt = SEEK_DOWN;
        return;
    }

    swc_opt = ERR_NO_SIG;
}

void setup(){
    Serial.begin(9600);
}

void loop(){
    updateReadings();
    checkSWC();
    reportReadings();
    delay(1000);
}