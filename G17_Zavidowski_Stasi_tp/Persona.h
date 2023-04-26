/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _PERSONA_H
#define _PERSONA_H

class Persona {
public: 
    
const string get_nombre();
    
const string get_apellido();
    
int get_edad();
    
float get_altura();
    
float get_peso();
    
/**
 * @param NuevaEdad
 */
void set_edad(const unsigned int NuevaEdad);
    
/**
 * @param NuevaAltura
 */
void set_altura(const float NuevaAltura);
    
/**
 * @param NuevoPeso
 */
void set_peso(const float NuevoPeso);
private: 
    const string Nombre;
    const string Apellido;
    int Edad;
    float Altura;
    float Peso;
};

#endif //_PERSONA_H