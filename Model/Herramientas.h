
#include "Header.h"
#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

class Herramientas {
public: 
    Herramientas(string modelo_, string funcion_, float precioherra_, int tiempoalq_, float seguro_);
    ~Herramientas();

const string get_modelo();
    
float get_precioherra();
    
float get_seguro();
    
int get_tiempoalq();
    
const string get_funcion();
    

void set_precio(float NuevoPre);
    

void set_seguro(float NuevoSeguro);
    

void set_tiempoalq(int TiempoNuevo);
    
int devolverseguro();


protected: 
    const string modelo;
    const string funcion;
    float precioherra;
    int tiempoalq;
    float seguro;
};

#endif //_HERRAMIENTAS_H