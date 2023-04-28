/**
 * Project Untitled
 */


#include "Despachante.h"

/**
 * Despachante implementation
 */
Despachante::Despachante(string nombreemp_, string DNI_, string curriculum_, string rubro_, int costoenvio_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_) {
    this->costoenvio = costoenvio_;
}

Despachante::~Despachante()
{
}

/**
 * @param Cliente.domicilio
 * @return void
 */
void Despachante::entregarpedido(Cliente.domicilio) {
    return;
}

/**
 * @return int
 */
int Despachante::cobrar() {
    return 0;
}