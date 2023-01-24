#include "MoteurEssence.h"
#include <iostream>
MoteurEssence::MoteurEssence(int cylindree_) : MoteurThermique() {
    //  Associations des entrées
    cylindree = cylindree_;

    // Définitions des variables
    K = 0.07;
}

MoteurEssence::~MoteurEssence(void) {
    // pass
}

float MoteurEssence::calculerConsommation(void) {
    return Q * calculerPuissance();
}

