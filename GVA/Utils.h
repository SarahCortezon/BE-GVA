#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <list>

using namespace std;

enum Options { Standard, Luxe };

enum Dimensions { L1, L2, h, l };

int afficherMenu(string titre, list<string> listeChoix);

int afficherMenu(string titre, list<string> listeChoix, string contexte);

#endif // UTILS_H
