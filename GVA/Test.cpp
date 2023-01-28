#include <iostream>

#include "Test.h"

#include "class/Chassis/ChassisBerline.h"
#include "class/Chassis/ChassisBerline4x4.h"
#include "class/Chassis/ChassisBerlineBreak.h"
#include "class/Chassis/ChassisCoupe.h"

#include "class/Moteur/MoteurEssence.h"
#include "class/Moteur/MoteurDiesel.h"
#include "class/Moteur/MoteurElectrique.h"
#include "class/Moteur/MoteurHybride.h"

#include "Voiture.h"


Test::Test() {
    // pass
}

Test::~Test() {
    // pass
}

void Test::lancer() {
    cout << "=> TESTS\n\n";
    ut();
    it();
}

void Test::ut() {
    cout << "-> Tests unitaires\n\n";

    cout << "Chassis :\n\n";

    Chassis* chassis = new ChassisBerline(0);
    ut_chassis(chassis, 0.2873, 0, "Chassis Berline");

    /*
    cout << "\tChassis Berline" << "\n";
    ChassisBerline cb = ChassisBerline();
    cout << "Coef:\t" << cb.calculerCx() << " (= 0.2873)\n";
    cout << "Prix:\t" << cb.calculerPrix() << " (= 0)\n";
    cout << "Infos:\t" << cb.getInformation() << " (= Chassis Berline)\n\n";

    cout << "\tChassis Berline 4x4" << "\n";
    ChassisBerline4x4 cb4x4 = ChassisBerline4x4();
    cout << "Coef:\t" << cb4x4.calculerCx() << " (= 0.4485)\n";
    cout << "Prix:\t" << cb4x4.calculerPrix() << " (= 3000.)\n";
    cout << "Infos:\t" << cb4x4.getInformation() << " (= Chassis Berline 4x4)\n\n";

    cout << "\tChassis Berline Break" << "\n";
    ChassisBerlineBreak cbb = ChassisBerlineBreak();
    cout << "Coef:\t" << cbb.calculerCx() << " (= 0.3604)\n";
    cout << "Prix:\t" << cbb.calculerPrix() << " (= 1000.)\n";
    cout << "Infos:\t" << cbb.getInformation() << " (= Chassis Berline Break)\n\n";

    cout << "\tChassis Coupe" << "\n";
    ChassisCoupe cc = ChassisCoupe();
    cout << "Coef:\t" << cc.calculerCx() << " (= 0.1973)\n";
    cout << "Prix:\t" << cc.calculerPrix() << " (= 2000.)\n";
    cout << "Infos:\t" << cc.getInformation() << " (= Chassis Coupé)\n\n";

    cout << "Moteurs :\n\n";

    cout << "\tMoteur Essence (cc1800)" << "\n";
    MoteurEssence me1 = MoteurEssence(1800);
    cout << "P:\t" << me1.calculerPuissance() << " (= 126.)\n";
    cout << "Conso:\t" << me1.calculerConsommation() << " (= 6.93)\n";
    cout << "Prix:\t" << me1.calculerPrix() << " (= 0)\n";
    cout << "Infos:\t" << me1.getInformation() << " (= Moteur Essence (cc1800))\n\n";

    cout << "\tMoteur Essence (cc2200)" << "\n";
    MoteurEssence me2 = MoteurEssence(2200);
    cout << "P:\t" << me2.calculerPuissance() << " (= 154.)\n";
    cout << "Conso:\t" << me2.calculerConsommation() << " (= 8.47)\n";
    cout << "Prix:\t" << me2.calculerPrix() << " (= 1000)\n";
    cout << "Infos:\t" << me2.getInformation() << " (= Moteur Eseence (cc2200))\n\n";

    cout << "\tMoteur Diesel (cc1800)" << "\n";
    MoteurDiesel md1 = MoteurDiesel(1800);
    cout << "P:\t" << md1.calculerPuissance() << " (= 108.)\n";
    cout << "Conso:\t" << md1.calculerConsommation() << " (= 4.7320)\n";
    cout << "Prix:\t" << md1.calculerPrix() << " (= 2000)\n";
    cout << "Infos:\t" << md1.getInformation() << " (= Moteur Diesel (cc1800))\n\n";

    cout << "\tMoteur Diesel (cc2200)" << "\n";
    MoteurDiesel md2 = MoteurDiesel(2200);
    cout << "P:\t" << md2.calculerPuissance() << " (= 132.)\n";
    cout << "Conso:\t" << md2.calculerConsommation() << " (= 5.4081)\n";
    cout << "Prix:\t" << md2.calculerPrix() << " (= 3000)\n";
    cout << "Infos:\t" << md2.getInformation() << " (= Moteur Diesel (cc2200))\n\n";

    cout << "\tMoteur Electrique" << "\n";
    MoteurElectrique mee = MoteurElectrique();
    cout << "P:\t" << mee.calculerPuissance() << " (= 70.)\n";
    cout << "Conso:\t" << mee.calculerConsommation() << " (= 0.)\n";
    cout << "Prix:\t" << mee.calculerPrix() << " (= 3000)\n";
    cout << "Infos:\t" << mee.getInformation() << " (= Moteur Electrique)\n\n";

    cout << "\tMoteurHybride (cc1800)" << "\n";
    MoteurHybride mh1 = MoteurHybride(1800);
    cout << "P:\t" << mh1.calculerPuissance() << " (= 196.)\n";
    cout << "Conso:\t" << mh1.calculerConsommation() << " (= 6.93)\n";
    cout << "Prix:\t" << mh1.calculerPrix() << " (= 3000)\n\n";
    cout << "Infos:\t" << mh1.getInformation() << " (= Moteur Hybride (Moteur Essence (cc1800) / Moteur Electrique))\n\n";

    cout << "\tMoteur Hybride (cc2200)" << "\n";
    MoteurHybride mh2 = MoteurHybride(2200);
    cout << "P:\t" << mh2.calculerPuissance() << " (= 224.)\n";
    cout << "Conso:\t" << mh2.calculerConsommation() << " (= 8.47)\n";
    cout << "Prix:\t" << mh2.calculerPrix() << " (= 4000.)\n";
    cout << "Infos:\t" << mh2.getInformation() << " (= Moteur Hybride (Moteur Essence (cc2200) / Moteur Electrique))\n\n";
    */
}

void Test::it() {
    cout << "-> Tests d'Intégrations\n\n";

    /*
    Chassis* c = new ChassisBerline();
    Moteur* m = new MoteurEssence(1800);
    Voiture* v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisBerline();
    m = new MoteurDiesel(1800);
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisBerline();
    m = new MoteurElectrique();
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisBerline();
    m = new MoteurHybride(1800);
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisCoupe();
    m = new MoteurEssence(1800);
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisCoupe();
    m = new MoteurDiesel(1800);
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisCoupe();
    m = new MoteurElectrique();
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";

    c = new ChassisCoupe();
    m = new MoteurHybride(1800);
    v = new Voiture(c, m);
    cout << v->getInformations() << "\n\n";
    */
}

void Test::ut_chassis(Chassis* chassis, float cxAttendu, int prixAttendu, string infoAttendu) {
    cout << "Coef : " << chassis->calculerCx() << " (= " << cxAttendu << ")\n";
    cout << "Prix : " << chassis->calculerPrix() << " (= " << prixAttendu << ")\n";
    cout << "Info : " << chassis->getInformation() << " (= " << infoAttendu << ")\n";
}
