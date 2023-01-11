#include "Moteur.h"

float Essence::calculerPuissance {
    K=0.07;
    P=K*cylindree;
    return P;
}

float Diesel::calculerPuissance {
  K=0.06;
  P=K*cylindree;
  return P;
}

float Essence::calculerConsommation {
  Q=0.055;
  C=Q*P;
  return P;
}

float Diesel::calculerConsommation {
  Q=0.055;
  C=Q*P/log10 (P/6);
  return P;
}

//Constructeur de la classe Essence
Essence::Essence(int c){
    cylindree=c;
}

//Constructeur de la classe Diesel
Diesel::Diesel(int c){
    cylindree=c;
}

