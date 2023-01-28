#include <iostream>
#include <string>
#include <list>

#include "Configurator.h"
#include "Test.h"
#include "Utils.h"

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
    list<string> listeChoix;

    int section;

    /**
     *  Menu Principal
     */
    entete = "Menu Principal";
    listeChoix = {
        "Configurateur",
        "Test"
    };

    section = afficherMenu(entete, listeChoix);

    switch (section) {
        case 1:
            configurator.configurer();
            break;
        case 2:
            test.lancer();
            break;
    }

    return 0;
}
