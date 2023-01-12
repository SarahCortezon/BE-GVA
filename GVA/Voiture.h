#ifndef VOITURE_H
#define VOITURE_H

#include "./class/Chassis/Chassis.h"

class Voiture {
    public:
        Voiture(Chassis *chassis_);
        virtual ~Voiture(void);

        // Attributs
        Chassis *chassis;
        //Moteur *moteur;

        // Fonctions
        int calculerPrix(void);

    protected:

    private:
        int prixInitial = 25000;
};

#endif // VOITURE_H
