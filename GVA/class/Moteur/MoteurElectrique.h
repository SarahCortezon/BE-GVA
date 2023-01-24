#ifndef MOTEURELECTRIQUE_H
#define MOTEURELECTRIQUE_H

#include "Moteur.h"

class MoteurElectrique : public Moteur {
    public:
        MoteurElectrique(void);
        virtual ~MoteurElectrique(void);

        virtual float calculerPuissance(void) override;
        virtual float calculerConsommation(void) override;
        virtual int calculerPrix(void) override;

    protected:

    private:
        float puissance = 70.
        int prixElectrique = 3000;
};

#endif // MOTEURELECTRIQUE_H
