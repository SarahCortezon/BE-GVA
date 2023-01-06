#include "ChassisBerline.h"
#include <math.h>

ChassisBerline::ChassisBerline(ChassisOption option_, BerlineSpecification specification_) {
    this->option = option_;
    this->specification = specification_;

    //  Association des dimensions du chassis current avec les dimensions possibles (en fonction de la specialisation)
    for (int i = 0; i < 4; i++) {        this->dimmensions[i] = this->dimensionsBySpecification[(int) this->specification][i];
    }
}

ChassisBerline::~ChassisBerline(void) {}

float ChassisBerline::calculerCx(void) {
    float R=0.03; float cx;
    switch (this->specification) {
        case BerlineSpecification::Standard:
            return cx = R*(((L1-h/2+L2)/2)*l*h+pow((h/2),2));
            break;
        case BerlineSpecification::QuatreQuatre:
            return cx = R*L1*l*h;
            break;
        case BerlineSpecification::Break:
            return cx = R*(L1+L2)/2*l*h;
            break;
    }
}

float ChassisBerline::calculerPrix(void) {
    float prix = 2500.;

    if (this->option == ChassisOption::Luxe) {
        prix += 1500.;
    }
    if (this->specification==BerlineSpecification::Break) {
        prix += 1000.;
    }
     if (this->specification==BerlineSpecification::QuatreQuatre) {
        prix += 3000.;
    }
     if (this->specification==BerlineSpecification::Standard) {
        prix = 25000.;
    }
    return prix;
}
