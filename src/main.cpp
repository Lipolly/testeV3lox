#include "../include/defines.h"
#include "../include/funcsAuxiliares.h"

FuncsAux funcs = FuncsAux();

void setup() {
    Serial.begin(9600);
    funcs.init();
}

void loop() {
    uint16 dist;
    funcs.ler()
}
