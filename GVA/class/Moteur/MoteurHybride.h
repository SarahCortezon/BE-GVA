#ifndef MOTEURHYBRIDE_H
#define MOTEURHYBRIDE_H

#include "Moteur.h"
#include "MoteurEssence.h"
#include "MoteurElectrique.h"

class MoteurHybride : public Moteur {
    public:
        MoteurHybride(int cylindree_);
        virtual ~MoteurHybride();

        virtual float calculerConsommation() override;
        virtual float calculerPuissance() override;
        virtual int calculerPrix() override;

    protected:

    private:
        MoteurEssence* moteur_essence;
        MoteurElectrique* moteur_electrique;

        int prixHybride = 3000;
};

#endif // MOTEURHYBRIDE_H
