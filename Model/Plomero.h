/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleados.h"


class Plomero: public Empleados {
public: 
    Plomero(string nombreemp_, string DNI_, string curriculum_, string rubro_, int valorservicio_);
    ~Plomero();
    
/**
 * @param Cliente.instalacionrota
 */
void arreglar(Cliente.instalacionrota);
    
int get_valorservicio();
private: 
    int valorservicio;
};

#endif //_PLOMERO_H