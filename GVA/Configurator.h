#ifndef CONFIGURATOR_H
#define CONFIGURATOR_H

#include "class/Chassis/Chassis.h"
#include "class/Moteur/Moteur.h"
#include "Voiture.h"

class Configurator
{
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        Configurator();
        virtual ~Configurator();

    /**
     *  Méthodes
     */
    public:
        void configurer(void);
        void afficher(void);

    private:
        Chassis* configurerChassis(void);
        Moteur* configurerMoteur(void);

    /**
     *  Attributs
     */
    private:
        Voiture* voiture;
};

#endif // CONFIGURATOR_H
