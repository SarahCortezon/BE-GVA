#include "MoteurDiesel.h"

#include "math.h"

MoteurDiesel::MoteurDiesel(int cylindree_) : MoteurThermique() {
    cylindree = cylindree_;
    K = 0.07;
    information = "Moteur Diesel";
}

MoteurDiesel::~MoteurDiesel(void) {
    // pass
}

float MoteurDiesel::calculerConsommation(void) {
    return (Q * calculerPuissance()) / log10(calculerPuissance()/6) ;
}

int MoteurDiesel::calculerPrix(void) {
    return Moteur::calculerPrix() + prixDiesel;
}
