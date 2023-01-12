#ifndef MOTEURTHERMIQUE_H
#define MOTEURTHERMIQUE_H

#include "Moteur.h"

class MoteurThermique : public Moteur {
    public:
        MoteurThermique(int cylindree_);
        virtual ~MoteurThermique() = 0;

    protected:

    private:

};

#endif // MOTEURTHERMIQUE_H
