#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

#include "class/Chassis/Chassis.h"
#include "class/Moteur/Moteur.h"

class Configurator
{
    public:
        Configurator();
        virtual ~Configurator();

        void configurer(void);
        void afficher(void);

    protected:

    private:
        Chassis* configurerChassis(void);
        Moteur* configurerMoteur(void);
};

#endif // CONFIGURATOR_H
