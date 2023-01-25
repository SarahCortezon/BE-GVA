#include "MoteurThermique.h"

MoteurThermique::MoteurThermique(void) : Moteur() {
    // pass
}

MoteurThermique::~MoteurThermique(void) {
    // pass
}

float MoteurThermique::calculerPuissance(void) {
    return K * cylindree;
}
