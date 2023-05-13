
#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Empleados.h"

class Vendedor : public Empleados {
public: 

    Vendedor(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_, int descuento_, string metododescuento_);
    ~Vendedor();

float cobrar(Cliente* Cli);
    
int Descuento(metodopago metodo );

private: 
    int descuento;
    string metododescuento;
  
};

#endif //_VENDEDOR_H