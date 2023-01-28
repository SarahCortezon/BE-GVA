#include "MoteurEssence.h"

MoteurEssence::MoteurEssence(int cylindree_) : MoteurThermique() {
    cylindree = cylindree_;
    K = 0.07;
    information = "Moteur Essence";
}

MoteurEssence::~MoteurEssence(void) {
    // pass
}

float MoteurEssence::calculerConsommation(void) {
    return Q * calculerPuissance();
}

