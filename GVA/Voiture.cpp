#include "Voiture.h"

Voiture::Voiture(Chassis *chassis_, Moteur *moteur_) : chassis(chassis_), moteur(moteur_) {
    // pass
}

Voiture::~Voiture(void) {
    // pass
}

int Voiture::calculerPrix(void) {
    return prixDepartVoiture + chassis->calculerPrix() + moteur->calculerPrix();
}
