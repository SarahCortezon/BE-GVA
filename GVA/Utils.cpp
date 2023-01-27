#include <iostream>

#include "Utils.h"

int selectionMenu(string titre, list<string> listeChoix) {
    cout << "\n" << titre << "\n";
    int i = 0;
    for (string choix : listeChoix) {
        i++;
        cout << "\t" << i << ". " << choix << "\n";
    }
    int selection;
    cin >> selection;
    return selection;
}
