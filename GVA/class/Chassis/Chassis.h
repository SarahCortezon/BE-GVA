#ifndef CHASSIS_H
#define CHASSIS_H

#include <array>
#include <string>

#include "Utils.h"

class Chassis {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        Chassis(void);
        virtual ~Chassis(void) = 0;

    /**
     *  Méthodes
     */
     public:
        virtual float calculerCx(void) = 0;
        virtual int calculerPrix(void) = 0;
        std::string getInformation(void);

    /**
     *  Attributs
     */
    protected:
        float R = 0.03;

        std::array<float, 4> dimensions;
        int nbPortes;
        std::string information;
};

#endif // CHASSIS_H
