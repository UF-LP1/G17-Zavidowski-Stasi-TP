/**
 * Project Untitled
 */


#include "Arthabituales.h"

//NO TENEMOS LOS METODOS

/**
 * Arthabituales implementation
 */
Arthabituales::Arthabituales(float precioart_, string material_, int numarticulo_, string tipo_) : Articulos(precioart_, material_, numarticulo_), tipo(tipo_) {
	this->tipo = tipo_;
}

Arthabituales::~Arthabituales()
{
}
