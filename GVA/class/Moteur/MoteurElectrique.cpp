#include "MoteurElectrique.h"

MoteurElectrique::MoteurElectrique() : Moteur() {
    information = "Moteur Electrique";
}

MoteurElectrique::~MoteurElectrique() {
    // pass
}

float MoteurElectrique::calculerPuissance(void) {
    return puissance;
}

float MoteurElectrique::calculerConsommation(void) {
    return 0.;
}

int MoteurElectrique::calculerPrix(void) {
    return Moteur::calculerPrix() + prixElectrique;
}
