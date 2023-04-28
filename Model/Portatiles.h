/**
 * Project Untitled
 */


#ifndef _PORTATILES_H
#define _PORTATILES_H

#include "Herramientas.h"


class Portatiles: public Herramientas {
public: 
    Portatiles(string modelo_, string funcion_, float precioherra_, int tiempoalq_, int duracionbat_);
    ~Portatiles();
    
void cargar();
    
void usar();
private: 
    int duracionbat;
};

#endif //_PORTATILES_H