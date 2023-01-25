#include "MoteurHybride.h"

MoteurHybride::MoteurHybride(int cylindree_) : Moteur() {
    moteur_essence = new MoteurEssence(cylindree_);
    moteur_electrique = new MoteurElectrique();
}

MoteurHybride::~MoteurHybride() {
    // pass
}

float MoteurHybride::calculerConsommation(void) {
    return moteur_essence->calculerConsommation();
}

float MoteurHybride::calculerPuissance() {
    return moteur_essence->calculerPuissance() + moteur_electrique->calculerPuissance();
}

int MoteurHybride::calculerPrix(void) {
    return prixHybride;
}
