/**
 * Project Untitled
 */

#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleados.h"
#include "../Projecto tp2/Projecto tp2/Arreglosplomero.h"


class Plomero: public Empleados {
public: 
    Plomero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_);
    ~Plomero();
    
/**
 * @param Cliente.instalacionrota
 */
string arreglar(Arregloplomero);
    
float cobrar(Arregloplomero);

private: 
    
};

#endif //_PLOMERO_H