#ifndef MOTEUR_H
#define MOTEUR_H

#include <string>

class Moteur {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        Moteur(void);
        virtual ~Moteur(void) = 0;

    /**
     *  Méthodes
     */
    public:
        virtual float calculerPuissance(void) = 0;
        virtual float calculerConsommation(void) = 0;
        virtual int calculerPrix(void);
        virtual std::string getInformation();

    /**
     *  Attributs
     */
    protected:
        float Q = 0.055;

        float K;
        int cylindree;
        std::string information;

    private:
        int prixCylindree = 1000;
};

#endif // MOTEUR_H
