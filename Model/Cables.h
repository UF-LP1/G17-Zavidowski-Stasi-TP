/**
 * Project Untitled
 */


#ifndef _CABLES_H
#define _CABLES_H

#include "Electricidad.h"


class Cables: public Electricidad {
public: 
    Cables(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_, int largo_) : Electricidad(precioart_, material_, numarticulo_,potencia_, consumo_), largo(largo_){}
    ~Cables();
    
const int get_largo();
private: 
    const int largo;
    bool unipolar;
};

#endif //_CABLES_H