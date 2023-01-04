#ifndef VOITURE_H
#define VOITURE_H


class Voiture
{
    public:
        // Constructeurs / Destructeurs
        Voiture();
        virtual ~Voiture();

        // Attributs
        Chassis chassis;
        //Moteur moteur;

        // Fonctions
        float calculPrix();

    protected:

    private:
};

#endif // VOITURE_H
