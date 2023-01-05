#ifndef CHASSISBERLINE_H
#define CHASSISBERLINE_H

#include "Chassis.h"

enum class BerlineSpecification {
    Standard,
    QuatreQuatre,
    Break
};

class ChassisBerline : public Chassis {
    public:
        ChassisBerline(ChassisOption option_, BerlineSpecification specification_);
        virtual ~ChassisBerline();

        float calculerCx(void) override;
        float calculerPrix(void) override;
    protected:
        BerlineSpecification specification;

        ChassisType type = ChassisType::Berline;
        int nbPortes = 4;

    private:
        float dimensionsBySpecification[3][4] = {
            {4.6, 2, 1.4, 2.2},
            {4.6, 0, 1.3, 2.5},
            {4.6, 3.2, 1.4, 2.2}
        };
};

#endif // CHASSISBERLINE_H
