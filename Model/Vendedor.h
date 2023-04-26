/**
 * Project Untitled
 */


#ifndef _VENDEDOR_H
#define _VENDEDOR_H

#include "Empleados.h"


class Vendedor: public Empleados {
public: 
    string metododescuento;
    
/**
 * @param Cliente.lista
 */
int cobrar(Cliente.lista);
    
/**
 * @param metodopago
 */
void atender(void metodopago);
    
/**
 * @param Cliente.metodopago
 */
int Descuento(Cliente.metodopago);
private: 
    int descuento;
};

#endif //_VENDEDOR_H