
#include "Header.h"
#ifndef _FERRETERIA_H
#define _FERRETERIA_H

class Ferreteria {
public: 
    Ferreteria(string nombref_, string telefono_);
    ~Ferreteria();
    
    
string get_ubicacion();
    
string get_horario();
    
string get_nombref();
    
string get_telefono();
    
void set_ubi(string NuevaUbi);
    
void set_horario(string NuevoHorario);
    
void vender();

private: 
    string ubicacion;
    string horario;
    const string nombref;
    const string telefono;
};

#endif //_FERRETERIA_H