#ifndef CHASSISBERLINE_H
#define CHASSISBERLINE_H

#include "Chassis.h"

class ChassisBerline : public Chassis {
    public:
        ChassisBerline(ChassisOption option_);
        virtual ~ChassisBerline();

        float calculerCx(void) override;
        float calculerPrix(void) override;

    protected:
        int nbPortes = 4;
        float dimensions[4] = {4.6, 2, 1.4, 2.2};

    private:
        float prix = 25000.;
        float prixLuxe = 1500.;
};

#endif // CHASSISBERLINE_H
