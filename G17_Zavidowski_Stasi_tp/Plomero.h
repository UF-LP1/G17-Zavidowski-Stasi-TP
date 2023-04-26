/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleados.h"


class Plomero: public Empleados {
public: 
    
/**
 * @param Cliente.instalacionrota
 */
void arreglar(Cliente.instalacionrota);
    
int get_valorservicio();
private: 
    int valorservicio;
};

#endif //_PLOMERO_H