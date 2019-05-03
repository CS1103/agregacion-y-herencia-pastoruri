//
// Created by utec on 03/05/19.
//

#ifndef BOOKS_LIBRO_H
#define BOOKS_LIBRO_H
#include "Volumenes.h"


class Libro : public Volumen{
    int numLibro;
public:
    void mostrarVol() override ;
    Libro()= default;
    Libro(int nLibro, int nVol, string nom) : Volumen{nVol,nom}, numLibro{nLibro} {};
};


#endif //BOOKS_LIBRO_H
