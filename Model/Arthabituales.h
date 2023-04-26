/**
 * Project Untitled
 */


#ifndef _ARTHABITUALES_H
#define _ARTHABITUALES_H
#include "Articulos.h"

class Arthabituales : public Articulos {
public:
    Arthabituales(float precioart_, string material_, int numarticulo_, string tipo_) : Articulos (precioart_, material_, numarticulo_), tipo(tipo_){}
    ~Arthabituales();

private: 
    
     string tipo;
};

#endif //_ARTHABITUALES_H