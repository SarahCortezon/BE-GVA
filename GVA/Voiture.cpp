#include "Voiture.h"

Voiture::Voiture(Chassis *chassis_, Moteur *moteur_) : chassis(chassis_), moteur(moteur_) {
    // pass
}

Voiture::~Voiture(void) {
    // pass
}

float Voiture::calculerVmax() {
    return 2 * moteur->calculerPuissance() * (1 - chassis->calculerCx());
}

int Voiture::calculerPrix(void) {
    return prixDepartVoiture + chassis->calculerPrix() + moteur->calculerPrix();
}

std::string Voiture::getInformations(void) {
    return "Voiture:\n  " +
        chassis->getInformation() + "\n  " +
        moteur->getInformation() + "\n  " +
        "Vmax: " + std::to_string(calculerVmax()) + "\n  " +
        "Prix: " + std::to_string(calculerPrix());
}
