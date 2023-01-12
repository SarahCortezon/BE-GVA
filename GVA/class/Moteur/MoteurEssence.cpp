#include "MoteurEssence.h"

MoteurEssence::MoteurEssence(int cylindree_) : MoteurThermique(cylindree_) {
    K = 0.07;
}

MoteurEssence::~MoteurEssence(void) {
    // pass
}

float MoteurEssence::calculerPuissance(void) {
    return K * cylindree;
}

float MoteurEssence::calculerConsommation(void) {
    return Q * calculerPuissance();
}

int MoteurEssence::calculerPrix(void) {
    return ;
}
