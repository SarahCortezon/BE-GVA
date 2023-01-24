#include "MoteurDiesel.h"

#include "math.h"

MoteurDiesel::MoteurDiesel(int cylindree_) : MoteurThermique() {
    cylindree = cylindree_;
    K = 0.06;
}

MoteurDiesel::~MoteurDiesel(void) {
    // pass
}

float MoteurDiesel::calculerConsommation(void) {
    return (Q * calculerPuissance()) / log10(calculerPuissance() / 6) ;
}

int MoteurDiesel::calculerPrix(void) {
    return MoteurThermique::calculerPrix() + prixDiesel;
}
