#include "ChassisCoupe.h"

ChassisCoupe::ChassisCoupe() : Chassis() {
    // pass
    //dimensions = dimensionsCoupe;
    nbPortes = nbPortesCoupe;
}

ChassisCoupe::~ChassisCoupe() {
    // pass
}

float ChassisCoupe::calculerCx(void) {
    return R*dimensions[l];
}

float ChassisCoupe::calculerPrix(void) {
    return prixChassis;
}
