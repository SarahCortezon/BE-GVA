#include "Voiture.h"

Voiture::Voiture(Chassis *chassis_) : chassis(chassis_) {
    // pass
}

Voiture::~Voiture(void) {
    // pass
}

int Voiture::calculerPrix(void) {
    return prixInitial + chassis->calculerPrix();
}
