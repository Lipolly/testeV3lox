#ifndef FUNCSAUX_H
#define FUNCSAUX_H

#include "./defines.h"

class FuncsAux {
    private:
        void resetWire();
    public:
        FuncsAux();
        bool init();
        uint16 ler();
};
#endif