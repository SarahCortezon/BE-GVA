#ifndef MOTEURTHERMIQUE_H
#define MOTEURTHERMIQUE_H

#include "Moteur.h"

class MoteurThermique : public Moteur {
    public:
        MoteurThermique(void);
        virtual ~MoteurThermique() = 0;

        virtual float calculerPuissance(void) override;

    protected:

    private:

};

#endif // MOTEURTHERMIQUE_H
