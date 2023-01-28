#ifndef VOITURE_H
#define VOITURE_H

#include <string>

#include "./class/Chassis/Chassis.h"
#include "./class/Moteur/Moteur.h"

class Voiture {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        Voiture(Chassis *chassis_, Moteur *moteur_);
        ~Voiture(void);

    /**
     *  Méthodes
     */
    public:
        float calculerVmax(void);
        int calculerPrix(void);
        std::string getInformations(void);

    /**
     *  Attributs
     */
    private:
        int prixDepartVoiture = 25000;

        Chassis *chassis;
        Moteur *moteur;
};

#endif // VOITURE_H
