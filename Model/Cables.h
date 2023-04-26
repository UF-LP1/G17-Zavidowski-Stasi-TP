/**
 * Project Untitled
 */


#ifndef _CABLES_H
#define _CABLES_H

#include "Electricidad.h"


class Cables: public Electricidad {
public: 
    Cables(int potencia_, float consumo_, int largo_) : Electricidad(potencia_, consumo_), largo(largo_){}
    ~Cables();
    
const int get_largo();
private: 
    const int largo;
    bool unipolar;
};

#endif //_CABLES_H