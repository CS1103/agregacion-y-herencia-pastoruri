#include "catch.hpp"
#include "Biblioteca.h"
#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"
SCENARIO("La cantidad total de volumenes sea 3"){
    GIVEN("Ingreso 2 libros y 1 revista"){
Biblioteca a;
a.incluir('l',"a");
a.incluir('l',"b");
a.incluir('r',"c");
int largo;
largo=a.Biblioteca_lenght();
REQUIRE(largo==3);
    }
}