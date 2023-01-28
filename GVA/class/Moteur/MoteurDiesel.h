#ifndef MOTEURDIESEL_H
#define MOTEURDIESEL_H

#include "MoteurThermique.h"

class MoteurDiesel : public MoteurThermique {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        MoteurDiesel(int cylindree_);
        virtual ~MoteurDiesel(void);

    /**
     *  Méthodes
     */
     public:
        virtual float calculerConsommation(void) override;
        virtual int calculerPrix() override;

    /**
     *  Attributs
     */
    private:
        int prixDiesel = 2000;
};

#endif // MOTEURDIESEL_H
