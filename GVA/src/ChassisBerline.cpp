#include "ChassisBerline.h"
#include <math.h>

ChassisBerline::ChassisBerline(ChassisOption option_) : Chassis(option_) {
    // pass
}

ChassisBerline::~ChassisBerline(void) {
    // pass
}

float ChassisBerline::calculerCx(void) override {
    return R*(((dimensions[L1] - dimensions[h]/2 + dimensions[L2])/2) * dimensions[l] * dimensions[h] + pow((dimensions[h]/2), 2));
}

float ChassisBerline::calculerPrix(void) override {
    if (this->option == ChassisOption::Luxe) {
        return prix + prixLuxe;
    } else {
        return prix;
    }
}
