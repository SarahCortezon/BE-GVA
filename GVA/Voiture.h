#ifndef VOITURE_H
#define VOITURE_H

#include "./class/Chassis/Chassis.h"
#include "./class/Moteur/Moteur.h"

class Voiture {
    public:
        Voiture(Chassis *chassis_, Moteur *moteur_);
        virtual ~Voiture(void);

        Chassis *chassis;
        Moteur *moteur;

        int calculerPrix(void);

    protected:

    private:
        int prixDepartVoiture = 25000;
};

#endif // VOITURE_H
