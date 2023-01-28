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
        Chassis(int estLuxe_);
        virtual ~Chassis(void) = 0;

    /**
     *  Méthodes
     */
     public:
        virtual float calculerCx(void) = 0;
        virtual int calculerPrix(void);
        std::string getInformation(void);

    /**
     *  Attributs
     */
    protected:
        float R = 0.03;
        int prixLuxe = 1500;
        int estLuxe;

        std::array<float, 4> dimensions;
        int nbPortes;
        std::string information;
};

#endif // CHASSIS_H
