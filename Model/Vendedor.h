/**
 * Project Untitled
 */


#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Empleados.h"


class Vendedor: public Empleados {
public: 
    Vendedor(string nombreemp_, string DNI_, string curriculum_, string rubro_, int descuento_, string metododescuento_);
    ~Vendedor();
  
    
/**
 * @param Cliente.lista
 */
int cobrar(Cliente.lista);
    
/**
 * @param metodopago
 */
void atender(Cliente.metodopago);
    
/**
 * @param Cliente.metodopago
 */
int Descuento(Cliente.metodopago);
private: 
    int descuento;
    string metododescuento;
};

#endif //_VENDEDOR_H