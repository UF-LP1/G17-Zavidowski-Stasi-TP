
#ifndef _ILUMINACION_H
#define _ILUMINACION_H

#include "Electricidad.h"


class Iluminacion: public Electricidad {
public:
    Iluminacion(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_, string interruptor_, string adaptador_);
    ~Iluminacion();
private: 

     string interruptor;
     string adaptador;
};

#endif //_ILUMINACION_H