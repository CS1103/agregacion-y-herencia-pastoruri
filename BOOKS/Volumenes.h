//
// Created by utec on 03/05/19.
//

#ifndef BOOKS_VOLUMENES_H
#define BOOKS_VOLUMENES_H
using namespace std;

#include <string>


class Volumen {
protected:
    string volNombre;
    int volNum;
public:
   Volumen()= default;
   Volumen(int vol, string nom);
   virtual ~Volumen();
   virtual void mostrarVol ()=0;
   int get_volNum();
   void set_volNum(int num);
   void set_volNombre(string nombre);
};


#endif //BOOKS_VOLUMENES_H
