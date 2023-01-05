#include "ChassisBerline.h"

ChassisBerline::ChassisBerline(ChassisOption option_, BerlineSpecification specification_) {
    this->option = option_;
    this->specification = specification_;

    //  Association des dimensions du chassis current avec les dimensions possibles (en fonction de la specialisation)
    for (int i = 0; i < 4; i++) {        this->dimmensions[i] = this->dimensionsBySpecification[(int) this->specification][i];
    }
}

ChassisBerline::~ChassisBerline(void) {}

float ChassisBerline::calculerCx(void) {
    switch (this->specification) {
        case BerlineSpecification::Standard:
            return 0.//TODO
            break;
        case BerlineSpecification::QuatreQuatre:
            return 0.//TODO
            break;
        case BerlineSpecification::Break:
            return 0.//TODO
            break;
    }
}

float ChassisBerline::calculerPrix(void) {
    float prix = 0.;

    if (this->option == ChassisOption::Luxe) {
        prix += 1500.;
    }

    //TODO

    return prix;
}
