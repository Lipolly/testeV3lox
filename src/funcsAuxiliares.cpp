#include "../lib/funcsAuxiliares.h"
#include "../lib/defines.h"

VL53L0X sensor;
unsigned char sensor_addr = 0x30;

FuncsAux::FuncsAux() {}

void FuncsAux::write_pfc_estate(unsigned char state) {
    Wire.beginTransmission(0x20);
    Wire.write(state);
    Wire.endTransmission();
}

void FuncsAux::init() {
    sensor.setAddress(sensor_addr);
    if (!sensor.init()) {
        Serial.print("Não deu certo");
    }
    sensor.setTimeout(0);
    sensor.setSignalRateLimit(0.25);

    sensor.startContinuous();
}

void FuncsAux::ler(uint16 dist) {
    // Serial.print("Lendo o sensor: ");
    // Serial.println(i);
    dist = sensor.readRangeContinuousMillimeters();
}