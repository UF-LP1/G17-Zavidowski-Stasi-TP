


#include "Iluminacion.h"

Iluminacion::Iluminacion(float precioart_, string material_, int numarticulo_, int potencia_, float consumo_, string interruptor_, string adaptador_) : Electricidad(precioart_, material_, numarticulo_, potencia_, consumo_){
	this->interruptor = interruptor_;
	this->adaptador = adaptador_;
}

Iluminacion::~Iluminacion()
{
}
