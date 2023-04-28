/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleados.h"


class Despachante: public Empleados {
public: 
    Despachante(string nombreemp_, string DNI_, string curriculum_, string rubro_, int costoenvio_);
    ~Despachante();
    
/**
 * @param Cliente.domicilio
 */
void entregarpedido(Cliente.domicilio);
    
int cobrar();
private: 
  
     int costoenvio;
};

#endif //_DESPACHANTE_H