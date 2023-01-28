#ifndef CHASSISBERLINEBREAK_H
#define CHASSISBERLINEBREAK_H

#include "ChassisBerline.h"

class ChassisBerlineBreak: public ChassisBerline {
    public:
        ChassisBerlineBreak(int estLuxe_);
        virtual ~ChassisBerlineBreak();

        float calculerCx(void) override;
        int calculerPrix(void) override;

    protected:

    private:
        int prixSpecification = 1000.;

};

#endif // CHASSISBERLINEBREAK_H
