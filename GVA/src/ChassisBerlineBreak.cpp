#include "ChassisBerlineBreak.h"

ChassisBerlineBreak::ChassisBerlineBreak(ChassisOption option_) : ChassisBerline(option_) {
    // pass
}

ChassisBerlineBreak::~ChassisBerlineBreak() {
    // pass
}

float ChassisBerlineBreak::calculerCx(void) override {
    return R * (dimensions[L1] * dimensions[L2])/2 * dimensions[l] * dimensions[h];
}

float ChassisBerlineBreak::calculerPrix(void) override {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
