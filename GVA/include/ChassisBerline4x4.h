#ifndef CHASSISBERLINE4X4_H
#define CHASSISBERLINE4X4_H

#include "ChassisBerline.h"

class ChassisBerline4x4 : public ChassisBerline {
    public:
        ChassisBerline4x4(ChassisOption option_) : ChassisBerline(option_);
        virtual ~ChassisBerline4x4();

        float calculerCx(void) override;
        float calculerPrix(void) override;

    protected:
        float dimensions[4] = {4.6, 0, 1.3, 2.5};

    private:
        float prixSpecification = 3000.;
};

#endif // CHASSISBERLINE4X4_H
