#include <iostream>

#include "Configurator.h"

#include "class/Chassis/ChassisBerline.h"
#include "class/Chassis/ChassisBerline4x4.h"
#include "class/Chassis/ChassisBerlineBreak.h"
#include "class/Chassis/ChassisCoupe.h"

#include "class/Moteur/MoteurEssence.h"
#include "class/Moteur/MoteurDiesel.h"
#include "class/Moteur/MoteurElectrique.h"
#include "class/Moteur/MoteurHybride.h"

using namespace std;

Configurator configurator = Configurator();

/************************************************
 *  Sequence de tests
 ***********************************************/
void test();

/************************************************
 *  Tests unitaires
 ***********************************************/
void test_ut();

/************************************************
 *  Tests d'intégration
 ***********************************************/
void test_it();


/************************************************
 *
 *      APPLICATION
 *
 ***********************************************/
int main()
{
    if (true) {
        test();
    }

    return 0;
}

void test() {
    cout << "\n\tTESTS\n\n";
    test_ut();
    test_it();
}

void test_ut() {
    cout << "=> Tests unitaires\n\n";

    cout << "Chassis :\n\n";

    cout << "\tChassisBerline" << "\n";
    ChassisBerline cb = ChassisBerline();
    cout << "Coef:\t" << cb.calculerCx() << " (= 0.2873)\n";
    cout << "Prix:\t" << cb.calculerPrix() << " (= 0)\n\n";

    cout << "\tChassisBerline4x4" << "\n";
    ChassisBerline4x4 cb4x4 = ChassisBerline4x4();
    cout << "Coef:\t" << cb4x4.calculerCx() << " (= 0.4485)\n";
    cout << "Prix:\t" << cb4x4.calculerPrix() << " (= 3000.)\n\n";

    cout << "\tChassisBerlineBreak" << "\n";
    ChassisBerlineBreak cbb = ChassisBerlineBreak();
    cout << "Coef:\t" << cbb.calculerCx() << " (= 0.3604)\n";
    cout << "Prix:\t" << cbb.calculerPrix() << " (= 1000.)\n\n";

    cout << "\tChassisCoupe" << "\n";
    ChassisCoupe cc = ChassisCoupe();
    cout << "Coef:\t" << cc.calculerCx() << " (= 0.1973)\n";
    cout << "Prix:\t" << cc.calculerPrix() << " (= 2000.)\n\n";

    cout << "Moteurs :\n\n";

    cout << "\tMoteurEssence (cc1800)" << "\n";
    MoteurEssence me1 = MoteurEssence(1800);
    cout << "P:\t" << me1.calculerPuissance() << " (= 126.)\n";
    cout << "Conso:\t" << me1.calculerConsommation() << " (= 6.93)\n";
    cout << "Prix:\t" << me1.calculerPrix() << " (= 0)\n\n";

    cout << "\tMoteurEssence (cc2200)" << "\n";
    MoteurEssence me2 = MoteurEssence(2200);
    cout << "P:\t" << me2.calculerPuissance() << " (= 154.)\n";
    cout << "Conso:\t" << me2.calculerConsommation() << " (= 8.47)\n";
    cout << "Prix:\t" << me2.calculerPrix() << " (= 1000)\n\n";

    cout << "\tMoteurDiesel (cc1800)" << "\n";
    MoteurDiesel md1 = MoteurDiesel(1800);
    cout << "P:\t" << md1.calculerPuissance() << " (= 108.)\n";
    cout << "Conso:\t" << md1.calculerConsommation() << " (= 4.7320)\n";
    cout << "Prix:\t" << md1.calculerPrix() << " (= 2000)\n\n";

    cout << "\tMoteurDiesel (cc2200)" << "\n";
    MoteurDiesel md2 = MoteurDiesel(2200);
    cout << "P:\t" << md2.calculerPuissance() << " (= 132.)\n";
    cout << "Conso:\t" << md2.calculerConsommation() << " (= 5.4081)\n";
    cout << "Prix:\t" << md2.calculerPrix() << " (= 3000)\n\n";

    cout << "\tMoteurElectrique" << "\n";
    MoteurElectrique mee = MoteurElectrique();
    cout << "P:\t" << mee.calculerPuissance() << " (= 70.)\n";
    cout << "Conso:\t" << mee.calculerConsommation() << " (= 0.)\n";
    cout << "Prix:\t" << mee.calculerPrix() << " (= 3000)\n\n";

    cout << "\tMoteurHybride (cc1800)" << "\n";
    MoteurHybride mh1 = MoteurHybride(1800);
    cout << "P:\t" << mh1.calculerPuissance() << " (= 196.)\n";
    cout << "Conso:\t" << mh1.calculerConsommation() << " (= 6.93)\n";
    cout << "Prix:\t" << mh1.calculerPrix() << " (= 3000)\n\n";

    cout << "\tMoteurHybride (cc2200)" << "\n";
    MoteurHybride mh2 = MoteurHybride(2200);
    cout << "P:\t" << mh2.calculerPuissance() << " (= 224.)\n";
    cout << "Conso:\t" << mh2.calculerConsommation() << " (= 8.47)\n";
    cout << "Prix:\t" << mh2.calculerPrix() << " (= 3000)\n\n";
}

void test_it() {
    cout << "=> Tests d'intégrations\n\n";


}
