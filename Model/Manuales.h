/**
 * Project Untitled
 */

#ifndef _MANUALES_H
#define _MANUALES_H

#include "Herramientas.h"


class Manuales: public Herramientas {
public: 
    Manuales(string modelo_, string funcion_, float precioherra_, int tiempoalq_, float seguro, string modouso_);
    ~Manuales();
    
void usar();
private: 
    const string modouso;
};

#endif //_MANUALES_H