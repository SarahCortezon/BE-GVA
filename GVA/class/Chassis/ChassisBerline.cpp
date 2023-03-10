#include <math.h>
#include "ChassisBerline.h"

ChassisBerline::ChassisBerline(int estLuxe_) : Chassis(estLuxe_) {
    dimensions = {4.6, 2, 1.4, 2.2};
    nbPortes = 4;
    information = "Chassis Berline";
}

ChassisBerline::~ChassisBerline(void) {
    // pass
}

float ChassisBerline::calculerCx(void) {
    return R*(((dimensions[L1] - dimensions[h]/2 + dimensions[L2])/2) * dimensions[l] * dimensions[h] + pow((dimensions[h]/2), 2));
}

int ChassisBerline::calculerPrix(void) {
    return Chassis::calculerPrix();
}
