/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleados.h"


class Cerrajero: public Empleados {
public: 
    
enum llave get_tipollave();
    
float get_precio();
    
string get_telefonoc();
    
/**
 * @param Nuevopre
 */
void set_precio(float Nuevopre);
    
/**
 * @param NuevoTel
 */
void set_telefonoc(string NuevoTel);
    
/**
 * @param Cliente.llavenecesaria
 */
enum llave hacerllave(void Cliente.llavenecesaria);
private: 
    enum llave tipollave;
    const string servicio;
    float precio;
    string telefonoc;
};

#endif //_CERRAJERO_H