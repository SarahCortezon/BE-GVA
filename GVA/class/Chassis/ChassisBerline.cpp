#include <math.h>
#include "ChassisBerline.h"

ChassisBerline::ChassisBerline(void) : Chassis() {
    dimensions = {4.6, 2, 1.4, 2.2};
    nbPortes = 4;
}

ChassisBerline::~ChassisBerline(void) {
    // pass
}

float ChassisBerline::calculerCx(void) {
    return R*(((dimensions[L1] - dimensions[h]/2 + dimensions[L2])/2) * dimensions[l] * dimensions[h] + pow((dimensions[h]/2), 2));
}

int ChassisBerline::calculerPrix(void) {
    return prixChassis;
}
