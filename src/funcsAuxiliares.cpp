#include "../include/funcsAuxiliares.h"
#include "../include/defines.h"

VL53L0X sensor;

FuncsAux::FuncsAux() {}


bool FuncsAux::init() {

    sensor.setTimeout(500);
    sensor.setMeasurementTimingBudget(200000);
    if (!sensor.init()) {
        Serial.println("Não deu certo");
        return false;
    }
    return true;
}

uint16 FuncsAux::ler() {
    uint16 data = sensor.readRangeSingleMillimeters();
    if (sensor.timeoutOccurred()) { 
        Serial.println("TIMEOUT"); 
        if (!sensor.init()) {
            Serial.println("Parou");
        }
    }
    return data;
}