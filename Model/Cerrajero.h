/**
 * Project Untitled
 */

#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"
#include "llave.h"

class Cerrajero: public Empleados {
public: 
    Cerrajero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo, string horariolab, llave tipollave_, string servicio_);
    ~Cerrajero();

llave get_tipollave();
    
float get_precio();
    
string get_telefonoc();
  
void set_precio(float Nuevopre);
   
void set_telefonoc(string NuevoTel);

llave hacerllave(llave uno);
private: 
    llave tipollave;
    const string servicio;
    float precio;
    string telefonoc;
};

#endif 