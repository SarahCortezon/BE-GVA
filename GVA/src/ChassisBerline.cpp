#include "ChassisBerline.h"
#include <math.h>

ChassisBerline::ChassisBerline() : Chassis() {
    // pass
}

ChassisBerline::~ChassisBerline(void) {
    // pass
}

float ChassisBerline::calculerCx(void) {
    return R*(((dimensions[L1] - dimensions[h]/2 + dimensions[L2])/2) * dimensions[l] * dimensions[h] + pow((dimensions[h]/2), 2));
}

float ChassisBerline::calculerPrix(void) {
    return prixChassis;
}
