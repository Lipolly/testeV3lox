#include "../include/defines.h"
#include "../include/funcsAuxiliares.h"

FuncsAux funcs = FuncsAux();

void setup() {
    Wire.begin();
    Serial.begin(9600);
    digitalWrite(LED_BUILTIN,funcs.init());
    
}

void loop() {
    uint16 dist[2] = {0,0};
    funcs.ler(dist);
    Serial.print("Leituras: ");
    Serial.print(dist[0]);
    Serial.print("  ");
    Serial.println(dist[1]);
    delay(100);
}
