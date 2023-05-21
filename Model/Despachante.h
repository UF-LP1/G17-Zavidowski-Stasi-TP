/**
 * Project Untitled
 */

#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleados.h"


class Despachante: public Empleados {
public: 
    Despachante(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_);
    ~Despachante();
    

    
string cobrarenvio(int dom);
private: 
  
   
};

#endif //_DESPACHANTE_H