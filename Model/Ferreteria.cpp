/**
 * Project Untitled
 */

#include "Articulos.h"
#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */

Ferreteria::Ferreteria(string nombref_, string telefono_) : nombref(nombref_), telefono(telefono_) {}

Ferreteria::~Ferreteria()
{
}

/**
 * @return string
 */
string Ferreteria::get_ubicacion() {
    return this->ubicacion;
}

/**
 * @return string
 */
string Ferreteria::get_horario() {
    return this->horario;
}

/**
 * @return string
 */
string Ferreteria::get_nombref() {
    return this->nombref;
}

/**
 * @return string
 */
string Ferreteria::get_telefono() {
    return this->telefono;
}

/**
 * @param NuevaUbi
 * @return void
 */
void Ferreteria::set_ubi(string NuevaUbi) {
    ubicacion = NuevaUbi;
    return;
}

/**
 * @param NuevoHorario
 * @return void
 */
void Ferreteria::set_horario(string NuevoHorario) {
    horario = NuevoHorario;
    return;
}

/**
 * @return void
 */
void Ferreteria::vender() {
    return;
}

/**
 * @param Articulo
 * @return int
 */
int Ferreteria::Devolucion(Articulos) {
    return 0;
}

/**
 * @param Articulo
 * @return Articulo
 */
Articulos Ferreteria::Cambioprodu(Articulos) {
    return;
}