/**
 * Project Untitled
 */


#ifndef _PORTATILES_H
#define _PORTATILES_H

#include "Herramientas.h"


class Portatiles: public Herramientas {
public: 
    
void cargar();
    
void usar();
private: 
    int duracionbat;
};

#endif //_PORTATILES_H