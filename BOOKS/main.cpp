#include <iostream>
#include "Volumenes.h"
#include "Libro.h"
#include "Revista.h"
#include "BIblioteca.h"
int main() {
    Biblioteca a;
    a.incluir('r',"a");
    a.incluir('r',"b");
    a.incluir('l',"c");
    a.mostrarBiblioteca();




    return 0;
}