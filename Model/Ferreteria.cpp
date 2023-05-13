
#include "Articulos.h"
#include "Ferreteria.h"


Ferreteria::Ferreteria(string nombref_, string telefono_) : nombref(nombref_), telefono(telefono_) {}

Ferreteria::~Ferreteria()
{
}

string Ferreteria::get_ubicacion() {
    return this->ubicacion;
}


string Ferreteria::get_horario() {
    return this->horario;
}


string Ferreteria::get_nombref() {
    return this->nombref;
}


string Ferreteria::get_telefono() {
    return this->telefono;
}


void Ferreteria::set_ubi(string NuevaUbi) {
    ubicacion = NuevaUbi;
    return;
}


void Ferreteria::set_horario(string NuevoHorario) {
    horario = NuevoHorario;
    return;
}


void Ferreteria::vender() {

    return;
}
