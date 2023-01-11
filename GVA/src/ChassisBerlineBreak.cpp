#include "ChassisBerlineBreak.h"

ChassisBerlineBreak::ChassisBerlineBreak() : ChassisBerline() {
    // pass
}

ChassisBerlineBreak::~ChassisBerlineBreak() {
    // pass
}

float ChassisBerlineBreak::calculerCx(void) {
    return R * (dimensions[L1] + dimensions[L2])/2 * dimensions[l] * dimensions[h];
}

float ChassisBerlineBreak::calculerPrix(void) {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
