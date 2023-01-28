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
    voiture->getInformations();
}

Chassis* Configurator::configurerChassis(void) {
    /**
     *  Type de Chassis
     */
    string entete = "=> Configurateur:\tType de Chassis";
    list<string> listeChoix = {
        "Berline",
        "Coupé"
    };

    int choix = afficherMenu(entete, listeChoix);

    /**
     *  1 = Berline
     *  2 = Coupé
     */
    switch (choix) {
        case 1:
            /**
             *  Spécialisation Chassis
             */
            entete = "=> Configurateur:\tSpécialisation du Chassis";
            listeChoix = {
                "Standard",
                "4x4",
                "Break"
            };

            choix = afficherMenu(entete, listeChoix);

            /**
             * 1 = Standard
             * 2 = 4x4
             * 3 = Break
             */
            switch (choix) {
                case 1:
                    return new ChassisBerline();
                    break;
                case 2:
                    return new ChassisBerline4x4();
                    break;
                case 3:
                    return new ChassisBerlineBreak();
                    break;
            }
            break;
        case 2:
            return new ChassisCoupe();
            break;
    }
}

Moteur* Configurator::configurerMoteur(void) {
    string entete;
    list<string> listeChoix;

    int energie, cylindree;

    /**
     *  Choix:  Type de Moteur
     */
    entete = "Type de Moteur";
    listeChoix = {
        "Essence",
        "Diesel",
        "Électrique",
        "Hybride"
    };

    energie = afficherMenu(entete, listeChoix);

    /**
     *  Choix:  Cylindrée
     */
    entete = "Cylindrée";
    listeChoix = {
        "1800",
        "2200"
    };

    cylindree = afficherMenu(entete, listeChoix);
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
        case 3:
            return new MoteurElectrique();
            break;
        case 4:
            return new MoteurHybride(cylindree);
            break;
    }
}
