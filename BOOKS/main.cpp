#include <iostream>
#include "Volumen.h"
#include "Libro.h"
#include "Revista.h"
#include "Biblioteca.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#ifndef CATCH_CONFIG_MAIN
int main() {
    Biblioteca a;
    a.incluir('r',"a");
    a.incluir('r',"b");
    a.incluir('l',"c");
    a.mostrarBiblioteca();


    return 0;
}
#endif