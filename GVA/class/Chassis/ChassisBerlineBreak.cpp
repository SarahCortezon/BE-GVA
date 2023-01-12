#include "ChassisBerlineBreak.h"

ChassisBerlineBreak::ChassisBerlineBreak() : ChassisBerline() {
    dimensions = {4.6, 3.2, 1.4, 2.2};
}

ChassisBerlineBreak::~ChassisBerlineBreak() {
    // pass
}

float ChassisBerlineBreak::calculerCx(void) {
    return R * (dimensions[L1] + dimensions[L2])/2 * dimensions[l] * dimensions[h];
}

int ChassisBerlineBreak::calculerPrix(void) {
    return ChassisBerline::calculerPrix() + prixSpecification;
}
