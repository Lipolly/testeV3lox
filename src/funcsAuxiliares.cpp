#include "../include/funcsAuxiliares.h"

#include "../include/defines.h"

VL53L0X sensor[2];

FuncsAux::FuncsAux() {}

bool FuncsAux::init() {
    for (int i = 0; i < 1; i++) {
        digitalWrite(XSHUT1, !i);
        digitalWrite(XSHUT2, i);
        delay(10);
        sensor[i].setTimeout(500);
        sensor[i].setMeasurementTimingBudget(200000);
        if (!sensor[i].init()) {
            Serial.println("Não deu certo");
            return false;
        }
    }
    return true;
}

void FuncsAux::ler(uint16 data[]) {
    for(int i = 0; i < 1; i++) {
    data[i] = sensor[i].readRangeSingleMillimeters();
        if (sensor[i].timeoutOccurred()) {
            Serial.println("TIMEOUT");
            if (!sensor[i].init()) {
                Serial.println("Parou");
            }
        }
    }
}