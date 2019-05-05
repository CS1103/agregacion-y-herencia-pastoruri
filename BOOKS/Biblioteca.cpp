//
// Created by utec on 03/05/19.
//

#include "BIblioteca.h"
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"
#include "Biblioteca.h"

#include <iostream>
using namespace std;
void Biblioteca::incluir(char t, string nombre) {
    if(t=='r'){
        nRevistas++;
        coleccion.push_back(new Revista(nRevistas,nRevistas+nLibros,nombre));
    }
    else if(t=='l'){
        nLibros++;
        coleccion.push_back(new Libro(nLibros,nRevistas+nLibros,nombre));
    }

}

void Biblioteca::mostrarBiblioteca() {

    for(int i=0;i<(nLibros+nRevistas);i++){
        coleccion[i]->mostrarVol();
        cout<<endl;
    }

}

Biblioteca::~Biblioteca() {
    for(int i=0;i<(nLibros+nRevistas);i++){
        delete coleccion[i];
        cout<<endl;
    }
}
