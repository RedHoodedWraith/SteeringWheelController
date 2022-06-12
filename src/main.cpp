#include <Arduino.h>
#include "SWC_Resistance_Values.h"

int signal_pin = 0;
int raw = 0;
int supplied_voltage = 5;
float manipulated_voltage = 0;
float CONTROL_RES = CONTROL_RES_VAL;
float swc_val = 0;
float buffer = 0;

void reportReadings() {
    Serial.print("manipulated_voltage: ");
    Serial.println(manipulated_voltage);
    Serial.print("swc_val: ");
    Serial.println(swc_val);
}

void updateReadings() {
    raw = analogRead(signal_pin);
    buffer = raw * supplied_voltage;
    manipulated_voltage = (buffer) / 1024;
    buffer = (supplied_voltage / manipulated_voltage) - 1;
    swc_val = CONTROL_RES * buffer;
}

void setup(){
    Serial.begin(9600);
}

void loop(){
    updateReadings();
    reportReadings();
    delay(1000);
}