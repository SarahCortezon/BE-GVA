#ifndef CHASSIS_H
#define CHASSIS_H

#include <array>

#include "Utils.h"

class Chassis {
    /**
     *  Constructeur(s) | Destructeur
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

    /**
     *  Attributs
     */
    protected:
        float R = 0.03;

        std::array<float, 4> dimensions;
        int nbPortes;
};

#endif // CHASSIS_H
