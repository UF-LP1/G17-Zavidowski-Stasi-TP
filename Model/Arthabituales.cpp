
#include "Arthabituales.h"

Arthabituales::Arthabituales(float precioart_, string material_, int numarticulo_, string tipo_) : Articulos(precioart_, material_, numarticulo_) {
	this->tipo = tipo_;
}

Arthabituales::~Arthabituales()
{
}
