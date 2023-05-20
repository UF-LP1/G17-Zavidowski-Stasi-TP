/**
 * Project Untitled
 */

#ifndef _ELECTRICIDAD_H
#define _ELECTRICIDAD_H

#include "Articulos.h"


class Electricidad: public Articulos {
public: 
    Electricidad(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_);
    ~Electricidad();
int get_potencia();
    
float get_consumo();

void imprimir() ;

protected: 
int potencia;
float consumo;
};

#endif //_ELECTRICIDAD_H