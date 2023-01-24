#ifndef MOTEURESSENCE_H
#define MOTEURESSENCE_H

#include "MoteurThermique.h"

class MoteurEssence : public MoteurThermique {
    public:
        MoteurEssence(int cylindree_);
        virtual ~MoteurEssence(void);

        virtual float calculerConsommation(void) override;

    protected:

    private:

};

#endif // MOTEURESSENCE_H
