#include "Moteur.h"

Moteur::Moteur(void) {
    // pass
}

Moteur::~Moteur(void) {
    // pass
}

int Moteur::calculerPrix(void) {
    if (cylindree == 2200) {
        return prixCylindree;
    } else {
        return 0;
    }
}
