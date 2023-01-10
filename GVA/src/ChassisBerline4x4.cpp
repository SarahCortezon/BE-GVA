#include "ChassisBerline4x4.h"

ChassisBerline4x4::ChassisBerline4x4() : ChassisBerline(option_) {
    // pass
}

ChassisBerline4x4::~ChassisBerline4x4() {
    // pass
}

float ChassisBerline4x4::calculerCx(void) override {
    return R * dimensions[L1] * dimensions[l] * dimensions[h];
}

float ChassisBerline4x4::calculerPrix(void) override {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
