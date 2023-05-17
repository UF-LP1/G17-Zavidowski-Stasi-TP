
#include "Cerrajero.h"


Cerrajero::Cerrajero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo, string horariolab, llave tipollave_, string servicio_, float precio_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo, horariolab), servicio(servicio_) {
    this->tipollave = tipollave_;
    this->precio = precio_;
}

Cerrajero::~Cerrajero()
{
}

enum llave Cerrajero::get_tipollave() {
    return this->tipollave;
}

float Cerrajero::get_precio() {
  return this->precio;
}

string Cerrajero::get_telefonoc() {
    return this->telefonoc;
}

void Cerrajero::set_precio(float Nuevopre) {
    precio = Nuevopre;
    return;
}


void Cerrajero::set_telefonoc(string NuevoTel) {
    telefonoc = NuevoTel;
    return;
}

llave Cerrajero::hacerllave(llave uno) {
     //hacer un dynamic cast para ver que tipo de llave recibe 
    return uno;
}