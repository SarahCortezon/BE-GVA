#ifndef CHASSISCOUPE_H
#define CHASSISCOUPE_H

#include "Chassis.h"

class ChassisCoupe : public Chassis {
    public:
        ChassisCoupe();
        virtual ~ChassisCoupe();

        float calculerCx(void) override;
        float calculerPrix(void) override;

    protected:
        nbPortes = 2;
        dimensions = {4.6, 0.6, 1.3, 2.2};

    private:
        prixChassis = 0.;
};

#endif // CHASSISCOUPE_H
