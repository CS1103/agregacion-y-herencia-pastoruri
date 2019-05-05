//
// Created by utec on 03/05/19.
//

#ifndef BOOKS_BIBLIOTECA_H
#define BOOKS_BIBLIOTECA_H

#include <vector>
#include "Volumen.h"

class Biblioteca {
    int nLibros;
    int nRevistas;
    vector<Volumen*> coleccion;
public:
    Biblioteca() : nLibros{0},nRevistas{0}{};
    void incluir(char t, string nombre);
    void mostrarBiblioteca();
    ~Biblioteca();
    int Biblioteca_lenght() {return nLibros+nRevistas;}

};


#endif //BOOKS_BIBLIOTECA_H
