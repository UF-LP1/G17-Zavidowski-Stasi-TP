/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class Articulos {
public: 
    Articulos(float precioart_, string material_, int numarticulo_) : precioart(precioart_), material(material_), numarticulo(numarticulo_){}
    ~Articulos();
float get_precioart();

    
const string get_material();
    
const int get_numarticulo();
    
/**
 * @param NuevoPrecio
 */
void set_precio(float NuevoPrecio);
protected: 
    float precioart;
    const string material;
    const int numarticulo;
};

#endif //_ARTICULOS_H