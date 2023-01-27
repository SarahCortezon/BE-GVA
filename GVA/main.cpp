#include <iostream>
#include <string>
#include <list>

#include "Configurator.h"
#include "Test.h"
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

Configurator configurator = Configurator();
Test test = Test();

/************************************************
 *
 *      APPLICATION
 *
 ***********************************************/
int main() {
    string entete;
    list<string> sections;

    int selection;

    /**
     *  Menu Principal
     */

    entete = "=> Menu Principal";
    sections = {
        "Configurateur",
        "Test"
    };

    selection = afficherMenu(entete, sections);

    switch (selection) {
        case 1:
            configurator.configurer();
            break;
        case 2:
            test.lancer();
            break;
    }

    return 0;
}
