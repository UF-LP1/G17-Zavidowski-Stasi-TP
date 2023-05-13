
#include "Electricidad.h"


Electricidad::Electricidad(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_) : Articulos(precioart_, material_, numarticulo_){
    this->potencia = potencia_;
    this->consumo = consumo_;
}

Electricidad::~Electricidad()
{
}


int Electricidad::get_potencia() {
    return this->potencia;
}


float Electricidad::get_consumo() {
    return this->consumo;
}