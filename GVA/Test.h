#ifndef TEST_H
#define TEST_H

#include <string>

#include "class/Chassis/Chassis.h"
#include "class/Moteur/Moteur.h"
#include "Voiture.h"

using namespace std;

class Test {
    /**
     *  Constructeurs | Destructeurs
     */
    public:
        Test();
        virtual ~Test();

    /**
     *  Méthodes
     */
    public:
        void lancer();
    private:
        void ut();
        void it();

        void ut_chassis(Chassis* chassis, float cxAttendu, int prixAttendu, string infoAttendu);
        void ut_moteur(Moteur* moteur, float pAttendu, float consoAttendu, int prixAttendu, string infoAttendu);

        void it_voiture(Voiture* voiture, float vmaxAttendu, int prixAttendu);
};

#endif // TEST_H
