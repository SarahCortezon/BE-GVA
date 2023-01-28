#include <iostream>

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

std::string Moteur::getInformation() {
    if (cylindree == 2200 || cylindree == 1800) {
                return information + " (cc" + std::to_string(cylindree) + ")";
    }  else {
        return information;
    }
}
