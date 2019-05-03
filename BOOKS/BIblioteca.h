//
// Created by utec on 03/05/19.
//

#ifndef BOOKS_BIBLIOTECA_H
#define BOOKS_BIBLIOTECA_H

#include <vector>
#include "Volumenes.h"

class Biblioteca {
    int nLibros;
    int nRevistas;
    vector<Volumen*> coleccion;
public:
    Biblioteca() : nLibros{0},nRevistas{0}{};
    void incluir(char t, string nombre);
    void mostrarBiblioteca();
    //incluir entrada
};


#endif //BOOKS_BIBLIOTECA_H
