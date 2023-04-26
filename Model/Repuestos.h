/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _REPUESTOS_H
#define _REPUESTOS_H

class Repuestos {
public: 
    float tamanyo;
    
const string get_nomb();
    
const string get_descripcion();
    
float get_tam();
    
/**
 * @param NuevoTam
 */
void set_tam(float NuevoTam);
private: 
    const string nombreproduc;
    const string descripcion;
};

#endif //_REPUESTOS_H