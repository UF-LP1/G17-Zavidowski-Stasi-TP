/**
 * Project Untitled
 */


#ifndef _BAZAR_H
#define _BAZAR_H

#include "Articulos.h"


class Bazar: public Articulos {
public: 
    Bazar(float precioart_, string material_, int numarticulo_, string color_, float tamanyo_) : Articulos(precioart_, material_, numarticulo_), color(color_), tamanyo(tamanyo_){}
    ~Bazar();
const string get_color();
    
const float get_tamanyo();
private: 
    const string color;
    const float tamanyo;
    string sector;
};

#endif //_BAZAR_H