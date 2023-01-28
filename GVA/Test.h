#ifndef TEST_H
#define TEST_H

#include <string>

#include "class/Chassis/Chassis.h"
#include "class/Moteur/Moteur.h"

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
};

#endif // TEST_H
