/**
 * Project Untitled
 */

#include "Cliente.h"
#include "Vendedor.h"

/**
 * Vendedor implementation
 */

Vendedor::Vendedor(string nombreemp_, string DNI_, string curriculum_, string rubro_, int descuento_, string metododescuento_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_){
    this->descuento = descuento_;
    this->metododescuento = metododescuento_;
}
/**
 * @param Cliente.lista
 * @return int
 */
int Vendedor::cobrar(Cliente.lista) {
    return 0;
}

/**
 * @param metodopago
 * @return void
 */
void Vendedor::atender(Cliente.metodopago) {
    return;
}

/**
 * @param Cliente.metodopago
 * @return int
 */
int Vendedor::Descuento(Cliente.metodopago) {
    return 0;
}

Vendedor::~Vendedor()
{
}
