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
    cout << "Context:\tTests\n\n";
    ut();
    it();
}

void Test::ut() {
    cout << "=> Tests unitaires\n\n";

    cout << "Chassis:\n";
    Chassis* chassis;

    cout << "\n--> Chassis Berline";
    chassis = new ChassisBerline(0);
    ut_chassis(chassis, 0.2873, 0, "Chassis Berline");
    chassis = new ChassisBerline(1);
    ut_chassis(chassis, 0.2873, 1500, "Chassis Berline (Luxe)");


    cout << "\n--> Chassis Berline 4x4";
    chassis = new ChassisBerline4x4(0);
    ut_chassis(chassis, 0.4485, 3000, "Chassis Berline 4x4");
    chassis = new ChassisBerline4x4(1);
    ut_chassis(chassis, 0.4485, 4500, "Chassis Berline 4x4 (Luxe)");

    cout << "\n--> Chassis Berline Break";
    chassis = new ChassisBerlineBreak(0);
    ut_chassis(chassis, 0.3604, 1000, "Chassis Berline Break");
    chassis = new ChassisBerlineBreak(1);
    ut_chassis(chassis, 0.3604, 2500, "Chassis Berline Break (Luxe)");

    cout << "\n--> Chassis Coupé";
    chassis = new ChassisCoupe(0);
    ut_chassis(chassis, 0.1973, 2000, "Chassis Coupé");
    chassis = new ChassisCoupe(1);
    ut_chassis(chassis, 0.1973, 3500, "Chassis Coupé (Luxe)");

    cout << "\n\n";
    cout << "Moteurs:\n";
    Moteur* moteur;

    cout << "\n--> Moteur Essence";
    moteur = new MoteurEssence(1800);
    ut_moteur(moteur, 126., 6.93, 0, "Moteur Essence (cc1800)");
    moteur = new MoteurEssence(2200);
    ut_moteur(moteur, 154., 8.47, 1000, "Moteur Essence (cc2200)");

    cout << "\n--> Moteur Diesel";
    moteur = new MoteurDiesel(1800);
    ut_moteur(moteur, 126., 5.2411, 2000, "Moteur Diesel (cc1800)");
    moteur = new MoteurDiesel(2200);
    ut_moteur(moteur, 154., 6.0098, 3000, "Moteur Diesel (cc2200)");

    cout << "\n--> Moteur Electrique";
    moteur = new MoteurElectrique();
    ut_moteur(moteur, 70., 0., 3000, "Moteur Electrique");

    cout << "\n--> Moteur Hybride";
    moteur = new MoteurHybride(1800);
    ut_moteur(moteur, 196., 6.93, 3000, "Moteur Hybride (cc1800)");
    moteur = new MoteurHybride(2200);
    ut_moteur(moteur, 224., 8.47, 4000, "Moteur Hybride (cc2200)");

    cout << "\n\n";
}

void Test::it() {
    cout << "=> Tests d'intégrations\n\n";

    cout << "Voitures:";
    Voiture* voiture;

    cout << "\n--> Prix le plus bas";
    voiture= new Voiture(new ChassisBerline(0), new MoteurEssence(1800));
    it_voiture(voiture, 0., 25000);

    cout << "\n--> Prix le plus haut 1";
    voiture= new Voiture(new ChassisBerline4x4(1), new MoteurDiesel(2200));
    it_voiture(voiture, 0., 32500);

    cout << "\n--> Prix le plus haut 1";
    voiture= new Voiture(new ChassisBerline4x4(1), new MoteurHybride(2200));
    it_voiture(voiture, 0., 32500);

    cout << "\n--> Luxe";
    voiture= new Voiture(new ChassisBerline(1), new MoteurEssence(1800));
    it_voiture(voiture, 0., 26500);

    cout << "\n--> Coupé";
    voiture= new Voiture(new ChassisCoupe(0), new MoteurEssence(1800));
    it_voiture(voiture, 0., 27000);

    cout << "\n--> 4x4";
    voiture= new Voiture(new ChassisBerline4x4(0), new MoteurEssence(1800));
    it_voiture(voiture, 0., 28000);

    cout << "\n--> CC2200";
    voiture= new Voiture(new ChassisBerline(0), new MoteurEssence(2200));
    it_voiture(voiture, 0., 26000);

    cout << "\n--> Diesel";
    voiture= new Voiture(new ChassisBerline(0), new MoteurDiesel(1800));
    it_voiture(voiture, 0., 27000);

    cout << "\n--> Hybride";
    voiture= new Voiture(new ChassisBerline(0), new MoteurHybride(1800));
    it_voiture(voiture, 0., 28000);
}

void Test::ut_chassis(Chassis* chassis, float cxAttendu, int prixAttendu, string infoAttendu) {
    cout << "\nCoef : " << chassis->calculerCx() << " (= " << cxAttendu << ")\n";
    cout << "Prix : " << chassis->calculerPrix() << " (= " << prixAttendu << ")\n";
    cout << "Info : " << chassis->getInformation() << " (= " << infoAttendu << ")\n";
}

void Test::ut_moteur(Moteur* moteur, float pAttendu, float consoAttendu, int prixAttendu, string infoAttendu) {
    cout << "\nP    : " << moteur->calculerPuissance() << " (= " << pAttendu << ")\n";
    cout << "Conso: " << moteur->calculerConsommation() << " (= " << consoAttendu << ")\n";
    cout << "Prix : " << moteur->calculerPrix() << " (= " << prixAttendu << ")\n";
    cout << "Info : " << moteur->getInformation() << " (= " << infoAttendu << ")\n";
}

void Test::it_voiture(Voiture* voiture, float vmaxAttendu, int prixAttendu) {
    cout << "\nVmax : " << voiture->calculerVmax() << " (= " << vmaxAttendu << ")\n";
    cout << "Prix : " << voiture->calculerPrix() << " (= " << prixAttendu << ")\n";
    cout << "Info : " << voiture->getInformations() << "\n";
}
