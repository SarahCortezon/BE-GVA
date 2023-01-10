#ifndef CHASSISBERLINEBREAK_H
#define CHASSISBERLINEBREAK_H

#include "ChassisBerline.h"

class ChassisBerlineBreak : public ChassisBerline {
    public:
        ChassisBerlineBreak(ChassisOption option_) : ChassisBerline(option_);
        virtual ~ChassisBerlineBreak();

        float calculerCx(void) override;
        float calculerPrix(void) override;

    protected:
        float dimensions[4] = {4.6, 3.2, 1.4, 2.2};

    private:
        float prixSpecification = 1000.;

};

#endif // CHASSISBERLINEBREAK_H
