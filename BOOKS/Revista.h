//
// Created by utec on 03/05/19.
//

#ifndef BOOKS_REVISTA_H
#define BOOKS_REVISTA_H


#include "Volumenes.h"

class Revista : public Volumen {
    int numRevista;
public:
    void mostrarVol() override ;
    Revista()= default;
    Revista(int nRevista, int nVol, string nom) : Volumen{nVol,nom}, numRevista{nRevista} {};

};


#endif //BOOKS_REVISTA_H
