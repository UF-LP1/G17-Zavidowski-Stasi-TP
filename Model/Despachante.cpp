
#include "Despachante.h"


Despachante::Despachante(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_, int costoenvio_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo_,horariolab_) {
    this->costoenvio = costoenvio_;
}

Despachante::~Despachante()
{
}


void Despachante::entregarpedido() {
    return;
}


int Despachante::cobrarenvio() {
    return 0;
}