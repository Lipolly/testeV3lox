#include "../include/defines.h"
#include "../include/funcsAuxiliares.h"

FuncsAux funcs = FuncsAux();

void setup() {
    Wire.begin();
    Serial.begin(9600);
    digitalWrite(LED_BUILTIN,funcs.init());
    
}

void loop() {
    uint16 dist = funcs.ler();
    Serial.print("Leitura: ");
    Serial.println(dist);
    delay(100);
}
