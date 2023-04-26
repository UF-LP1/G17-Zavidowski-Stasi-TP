/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleados.h"


class Despachante: public Empleados {
public: 
    
/**
 * @param Cliente.domicilio
 */
void entregarpedido(Cliente.domicilio);
    
int cobrar();
private: 
    string vehiculo;
     int costoenvio;
};

#endif //_DESPACHANTE_H