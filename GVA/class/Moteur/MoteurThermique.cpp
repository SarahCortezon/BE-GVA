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

int MoteurThermique::calculerPrix(void) {
    if (cylindree == 2200) {
        return prixCylindree;
    } else {
        return 0;
    }
}
