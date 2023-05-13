
#include "Cables.h"


Cables::Cables(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_, int largo_) : Electricidad(precioart_, material_, numarticulo_, potencia_, consumo_), largo(largo_) {}

Cables::~Cables()
{
}

const int Cables::get_largo() {
    return this->largo;
}