
#include "Plomero.h"


Plomero::Plomero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_, int valorservicio_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo_,horariolab_) {
    this->valorservicio = valorservicio_;
}


void Plomero::arreglar() {
    return;
}

Plomero::~Plomero()
{
}


int Plomero::get_valorservicio() {
    return this->valorservicio;
}