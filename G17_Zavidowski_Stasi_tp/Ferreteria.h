/**
 * Project Untitled
 */

#include "Header.h"
#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria {
public: 
    
void Operation1();
    
string get_ubicacion();
    
string get_horario();
    
string get_nombref();
    
string get_telefono();
    
/**
 * @param NuevaUbi
 */
void set_ubi(string NuevaUbi);
    
/**
 * @param NuevoHorario
 */
void set_horario(string NuevoHorario);
    
void vender();
    
/**
 * @param Articulo
 */
int Devolucion(void Articulo);
    
/**
 * @param Articulo
 */
Articulos Cambioprodu(void Articulo);
private: 
    string ubicacion;
    string horario;
    const string nombref;
    const string telefono;
};

#endif //_FERRETERIA_H