/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _REPUESTOS_H
#define _REPUESTOS_H

class Repuestos {
public: 
    Repuestos(string nombreproduc_, float tamanyo_, float precior_);
    ~Repuestos();

const string get_nomb();
    
const string get_descripcion();
    
float get_tam();
    
void set_tam(float NuevoTam);
private: 
    const string nombreproduc;
    float tamanyo;
    float precior;
    string descripcion;
};

#endif //_REPUESTOS_H