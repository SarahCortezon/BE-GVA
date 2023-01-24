#include "MoteurEssence.h"
#include <iostream>
MoteurEssence::MoteurEssence(int cylindree_) : MoteurThermique() {
    cylindree = cylindree_;
    K = 0.07;
}

MoteurEssence::~MoteurEssence(void) {
    // pass
}

float MoteurEssence::calculerConsommation(void) {
    return Q * calculerPuissance();
}

