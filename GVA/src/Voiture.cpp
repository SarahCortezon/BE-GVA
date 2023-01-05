#include "Voiture.h"

//  Constructeurs
Voiture::Voiture(void) {}

//  Destructeur
Voiture::~Voiture(void) {}

//  Methodes
float Voiture::calculerPrix() {
    return this->chassis->calculerPrix();
}
