#ifndef CHASSISBERLINE4X4_H
#define CHASSISBERLINE4X4_H

#include "ChassisBerline.h"

class ChassisBerline4x4 : public ChassisBerline {
    public:
        ChassisBerline4x4(int estLuxe_);
        virtual ~ChassisBerline4x4();

        float calculerCx(void) override;
        int calculerPrix(void) override;

    protected:

    private:
        int prixSpecification = 3000.;
};

#endif // CHASSISBERLINE4X4_H
