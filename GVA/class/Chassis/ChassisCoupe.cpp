#include "ChassisCoupe.h"

ChassisCoupe::ChassisCoupe(int estLuxe_) : Chassis(estLuxe_) {
    dimensions =  {4.6, 0.6, 1.3, 2.2};
    nbPortes = 2;
    information = "Chassis Coupé";
}

ChassisCoupe::~ChassisCoupe(void) {
    // pass
}

float ChassisCoupe::calculerCx(void) {
    return R * dimensions[l] * dimensions[L1]/2 * dimensions[h]; //TODO;
}

int ChassisCoupe::calculerPrix(void) {
    return prixChassis;
}
