#include <iostream>
#include <string>
#include <list>

#include "Configurator.h"
#include "Utils.h"

#include "class/Chassis/ChassisBerline.h"
#include "class/Chassis/ChassisBerline4x4.h"
#include "class/Chassis/ChassisBerlineBreak.h"
#include "class/Chassis/ChassisCoupe.h"

#include "class/Moteur/MoteurEssence.h"
#include "class/Moteur/MoteurDiesel.h"
#include "class/Moteur/MoteurElectrique.h"
#include "class/Moteur/MoteurHybride.h"

using namespace std;

Configurator::Configurator() {
    // pass
}

Configurator::~Configurator() {
    // pass
}

void Configurator::configurer(void) {
    Chassis* chassis = configurerChassis();
    Moteur* moteur = configurerMoteur();

    voiture = new Voiture(chassis, moteur);
    afficher();
}

void Configurator::afficher(void) {
    cout << voiture->getInformations();
    cout << "\n";
}

Chassis* Configurator::configurerChassis(void) {
    string entete, contexte = "Configurateur/Chassis";
    list<string> listeChoix;

    int type, luxe, specialite;

    /**
     *  Type de Chassis
     */
    entete = "Type";
    listeChoix = {
        "Berline",
        "Coupé"
    };

    type = afficherMenu(entete, listeChoix, contexte);

    /**
     *  Option du Chassis
     */
    entete = "Option";
    listeChoix = {
        "Standard",
        "Luxe",
    };

    luxe = afficherMenu(entete, listeChoix, contexte);

    if (type == 2) return new ChassisCoupe(luxe);

    /**
     *  Spécialisation Chassis
     */
    entete = "Spécialisation";
    listeChoix = {
        "Standard",
        "4x4",
        "Break"
    };

    specialite = afficherMenu(entete, listeChoix, contexte);

    switch (specialite) {
    case 1:
        return new ChassisBerline(luxe);
        break;
    case 2:
        return new ChassisBerline4x4(luxe);
        break;
    case 3:
        return new ChassisBerlineBreak(luxe);
        break;
    }
}

Moteur* Configurator::configurerMoteur(void) {
    string entete, contexte = "Configurateur/Moteur";
    list<string> listeChoix;

    int energie, cylindree;

    /**
     *  Type de Moteur
     */
    entete = "Type de Moteur";
    listeChoix = {
        "Essence",
        "Diesel",
        "Électrique",
        "Hybride"
    };

    energie = afficherMenu(entete, listeChoix, contexte);

    /**
     *  Cylindrée
     */
    entete = "Cylindrée";
    listeChoix = {
        "1800",
        "2200"
    };

    if (energie == 3) return new MoteurElectrique();

    cylindree = afficherMenu(entete, listeChoix, contexte);
    if (cylindree == 1) {
        cylindree = 1800;
    } else {
        cylindree = 2200;
    }

    switch (energie) {
    case 1:
        return new MoteurEssence(cylindree);
        break;
    case 2:
        return new MoteurDiesel(cylindree);
        break;
    case 4:
        return new MoteurHybride(cylindree);
        break;
    }
}
