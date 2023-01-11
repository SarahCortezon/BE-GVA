#include "Voiture.h"

Voiture::Voiture(Chassis *chassis_) : chassis(chassis_){
    // pass
}

Voiture::~Voiture(void) {
    // pass
}

float Voiture::calculerPrix() {
    return prixBase + chassis->calculerPrix();
}
