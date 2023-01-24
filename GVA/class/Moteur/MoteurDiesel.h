#ifndef MOTEURDIESEL_H
#define MOTEURDIESEL_H

#include "MoteurThermique.h"

class MoteurDiesel : public MoteurThermique {
    public:
        MoteurDiesel(int cylindree_);
        virtual ~MoteurDiesel(void);

        virtual float calculerConsommation(void) override;
        virtual int calculerPrix() override;

    protected:

    private:
        int prixDiesel = 2000;
};

#endif // MOTEURDIESEL_H
