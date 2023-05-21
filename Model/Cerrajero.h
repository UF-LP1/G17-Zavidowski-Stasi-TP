/**
 * Project Untitled
 */

#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"

class Cerrajero: public Empleados {
public: 
    Cerrajero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo, string horariolab,  string servicio_);
    ~Cerrajero();

    
    
string get_telefonoc();
    
void set_telefonoc(string NuevoTel);

string hacerllave(llave);

float cobrar(llave);

private: 
 
    const string servicio;
    string telefonoc;
};

#endif 