#include "ChassisBerline4x4.h"

ChassisBerline4x4::ChassisBerline4x4(int estLuxe_) : ChassisBerline(estLuxe_) {
    dimensions = {4.6, 0, 1.3, 2.5};
    information = "Chassis Berline 4x4";
}

ChassisBerline4x4::~ChassisBerline4x4() {
    // pass
}

float ChassisBerline4x4::calculerCx(void) {
    return R * dimensions[L1] * dimensions[l] * dimensions[h];
}

int ChassisBerline4x4::calculerPrix(void) {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
