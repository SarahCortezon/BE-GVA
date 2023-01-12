#ifndef CHASSIS_H
#define CHASSIS_H

#include <array>
#include "Utils.h"

class Chassis {
    public:
        Chassis(void);
        virtual ~Chassis(void) = 0;

        virtual float calculerCx(void) = 0;
        virtual int calculerPrix(void) = 0;

    protected:
        float R = 0.03;

        //  To Be Override
        std::array<float, 4> dimensions;
        int nbPortes;

    private:

};

#endif // CHASSIS_H
