#ifndef CHASSISBERLINE_H
#define CHASSISBERLINE_H

#include "Chassis.h"

class ChassisBerline : public Chassis {
    public:
        ChassisBerline();
        virtual ~ChassisBerline();

        virtual float calculerCx(void) override;
        virtual int calculerPrix(void) override;

    protected:

    private:
        int prixChassis = 0;
};

#endif // CHASSISBERLINE_H
