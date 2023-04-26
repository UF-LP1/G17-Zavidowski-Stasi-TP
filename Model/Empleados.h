/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _EMPLEADOS_H
#define _EMPLEADOS_H

class Empleados {
public: 
    
const string get_nombreemp();
    
const string get_DNI();
    
float get_sueldo();
    
string get_horariolab();
    
/**
 * @param NuevoSueldo
 */
void set_sueldo(float NuevoSueldo);
    
/**
 * @param NuevoHorario
 */
void set_horariolab(string NuevoHorario);
protected: 
    const string nombreemp;
    const string DNI;
    const string curriculum;
    const string rubro;
    float sueldo;
    string horariolab;
};

#endif //_EMPLEADOS_H