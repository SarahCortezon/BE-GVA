#include "ChassisBerline4x4.h"

ChassisBerline4x4::ChassisBerline4x4() : ChassisBerline() {
    // pass
}

ChassisBerline4x4::~ChassisBerline4x4() {
    // pass
}

float ChassisBerline4x4::calculerCx(void) {
    return R * dimensions[L1] * dimensions[l] * dimensions[h];
}

float ChassisBerline4x4::calculerPrix(void) {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
