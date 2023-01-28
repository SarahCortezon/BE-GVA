#include <iostream>

#include "Utils.h"

int afficherMenu(string titre, list<string> listeChoix) {
    int i, choixUtilisateur;

    cout << "=> "<< titre << "\n\n";

    i = 0;
    for (string choix : listeChoix) {
        i++;
        cout << "  " << i << ". " << choix << "\n";
    }
    cout << "\n";

    cin >> choixUtilisateur;

    system("clear");
    return choixUtilisateur;
}

int afficherMenu(string titre, list<string> listeChoix, string contexte) {
    cout << "Contexte:\t" << contexte << "\n\n";
    return afficherMenu(titre, listeChoix);
}
