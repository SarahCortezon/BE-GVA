#ifndef MOTEUR_H
#define MOTEUR_H


class Moteur
{
    public:
        Moteur();
        virtual ~Moteur(void)=0;

        virtual float calculerPuissance(void) = 0;
        virtual float calculerConsommation(void) = 0;
        virtual float calculerPrix(void) = 0;

    protected:
        float K;
        float P;
        float C;
        int cylindree;
        //float Consommation;
        //float Puissance;

    private:
};

class Essence: public Moteur {
    public:
    float calculerPuissance(void);
    float calculerConsommation(void);
    Essence(int cylindree);

};

class Diesel: public Moteur {
    public:
    float calculerPuissance(void);
    float calculerConsommation(void);
    Diesel(int cylindree);

};
#endif // MOTEUR_H
