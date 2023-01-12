#ifndef MOTEUR_H
#define MOTEUR_H


class Moteur
{
    public:
        Moteur(void);
        virtual ~Moteur(void) = 0;

        virtual float calculerPuissance(void) = 0;
        virtual float calculerConsommation(void) = 0;
        virtual int calculerPrix(void) = 0;

    protected:
        float Q = 0.055;

        float K;
        int cylindree;

    private:
};

#endif // MOTEUR_H
