//
// Created by utec on 03/05/19.
//

#include "Volumenes.h"
#include <iostream>
using namespace std;

int Volumen::get_volNum() {
    return volNum;
}
void Volumen::set_volNum(int num) {
    volNum=num;
}
void Volumen::set_volNombre(string nombre) {
    volNombre=nombre;

}

Volumen::~Volumen() {

}

Volumen::Volumen(int vol, string nom) {
    set_volNombre(nom);
    set_volNum(vol);
}
