#ifndef MOTEURTHERMIQUE_H
#define MOTEURTHERMIQUE_H

#include "Moteur.h"

class MoteurThermique : public Moteur {
    public:
        MoteurThermique(void);
        virtual ~MoteurThermique() = 0;

        virtual float calculerPuissance(void) override;
        virtual int calculerPrix(void) override;

    protected:

    private:
        int prixCylindree = 1000;
};

#endif // MOTEURTHERMIQUE_H
