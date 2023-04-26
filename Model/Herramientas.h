/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

class Herramientas {
public: 
    
const string get_modelo();
    
float get_precioherra();
    
float get_seguro();
    
int get_tiempoalq();
    
const string get_funcion();
    
/**
 * @param NuevoPre
 */
void set_precio(float NuevoPre);
    
/**
 * @param NuevoSeguro
 */
void set_seguro(float NuevoSeguro);
    
/**
 * @param TiempoNuevo
 */
void set_tiempoalq(int TiempoNuevo);
    
int devolverseguro();
protected: 
    const string modelo;
    float precioherra;
    float seguro;
    int tiempoalq;
    const string funcion;
};

#endif //_HERRAMIENTAS_H