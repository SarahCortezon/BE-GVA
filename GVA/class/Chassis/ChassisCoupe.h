#ifndef CHASSISCOUPE_H
#define CHASSISCOUPE_H

#include "Chassis.h"

class ChassisCoupe : public Chassis {
    public:
        ChassisCoupe(int estLuxe_);
        virtual ~ChassisCoupe();

        virtual float calculerCx(void) override;
        virtual int calculerPrix(void) override;

    protected:

    private:
        int prixChassis = 2000.;
};

#endif // CHASSISCOUPE_H
