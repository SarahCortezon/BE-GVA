#ifndef CHASSISBERLINE_H
#define CHASSISBERLINE_H

#include "Chassis.h"

class ChassisBerline : public Chassis {
    public:
        ChassisBerline();
        virtual ~ChassisBerline();

        float calculerCx(void) override;
        float calculerPrix(void) override;

    protected:
        int nbPortes = 4;
        float dimensions[4] = {4.6, 2, 1.4, 2.2};

    private:
        float prixChassis = 0.;
};

#endif // CHASSISBERLINE_H
