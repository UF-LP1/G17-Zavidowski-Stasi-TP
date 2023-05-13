
#include "Cliente.h"


Vendedor::Vendedor(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_, int descuento_, string metododescuento_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo_, horariolab_) 
{
	this->descuento = descuento_;
	this->metododescuento = metododescuento_;
}

Vendedor::~Vendedor()
{
}

float Vendedor::cobrar(Cliente* Cli) //esta funcion recorre la lista y acumula los precios para saber el importe total
{
	int count = 0;
	float acumprecio = 0;
	for (forward_list<Articulos>::iterator it = Cli->get_lista().begin(); it != Cli->get_lista().end(); ++it) {
		count++;
		acumprecio += it->get_precioart();

	}
	int desc= this->Descuento(Cli->get_pago());    //llamo a la funcion descuento
	acumprecio = acumprecio - acumprecio * desc / 100; //aplico el descuento
	return acumprecio;
}


int Vendedor::Descuento(metodopago metodo) { //dependiendo el metodo de pago que elige el cliente, la funcion retorna el descuento que se le hace
	if (metodo == efectivo)
		return 20;
	if (metodo == debito)
		return 10;
	if (metodo == credito)
		return 0;

}


