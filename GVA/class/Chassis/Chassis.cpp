#include "Chassis.h"

Chassis::Chassis(int estLuxe_) : estLuxe(estLuxe_) {
    // pass
}

Chassis::~Chassis(void) {
    // pass
}

int Chassis::calculerPrix(void) {
    if (estLuxe) return prixLuxe;
    return 0;
}

std::string Chassis::getInformation(void) {
    if (estLuxe) return information + " (Luxe)";
    return information;
}
