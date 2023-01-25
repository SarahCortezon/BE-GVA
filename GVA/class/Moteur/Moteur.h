#ifndef MOTEUR_H
#define MOTEUR_H

#include "../../Utils.h"

class Moteur
{
    public:
        Moteur(void);
        virtual ~Moteur(void) = 0;

        virtual float calculerPuissance(void) = 0;
        virtual float calculerConsommation(void) = 0;
        virtual int calculerPrix(void);

    protected:
        float Q = 0.055;

        float K;
        int cylindree;

    private:
        int prixCylindree = 1000;
};

#endif // MOTEUR_H
