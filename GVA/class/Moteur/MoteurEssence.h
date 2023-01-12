#ifndef MOTEURESSENCE_H
#define MOTEURESSENCE_H

#include "MoteurThermique.h"

class MoteurEssence : public MoteurThermique {
    public:
        MoteurEssence(int cylindree_);
        virtual ~MoteurEssence(void) = 0;

        virtual float calculerPuissance(void) override;
        virtual float calculerConsommation(void) override;
        virtual int calculerPrix(void) override;

    protected:

    private:

};

#endif // MOTEURESSENCE_H
