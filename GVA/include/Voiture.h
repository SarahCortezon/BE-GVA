#ifndef VOITURE_H
#define VOITURE_H

#include "Chassis.h"

class Voiture {
    public:
        Voiture(Chassis *chassis_);
        virtual ~Voiture(void);

        // Attributs
        Chassis *chassis;
        //Moteur *moteur;

        // Fonctions
        float calculerPrix();

    protected:

    private:
};

#endif // VOITURE_H
