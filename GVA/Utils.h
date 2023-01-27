#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <list>

using namespace std;

enum Options { Standard, Luxe };

enum Dimensions { L1, L2, h, l };

int selectionMenu(string titre, list<string> listeChoix);

#endif // UTILS_H
