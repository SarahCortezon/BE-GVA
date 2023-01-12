#include "ChassisCoupe.h"

ChassisCoupe::ChassisCoupe(void) : Chassis() {
    dimensions =  {4.6, 0.6, 1.3, 2.2};
    nbPortes = 2;
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
