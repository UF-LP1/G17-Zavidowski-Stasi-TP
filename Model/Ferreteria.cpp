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
    return "";
}

/**
 * @return string
 */
string Ferreteria::get_horario() {
    return "";
}

/**
 * @return string
 */
string Ferreteria::get_nombref() {
    return "";
}

/**
 * @return string
 */
string Ferreteria::get_telefono() {
    return "";
}

/**
 * @param NuevaUbi
 * @return void
 */
void Ferreteria::set_ubi(string NuevaUbi) {
    return;
}

/**
 * @param NuevoHorario
 * @return void
 */
void Ferreteria::set_horario(string NuevoHorario) {
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
int Ferreteria::Devolucion(void Articulo) {
    return 0;
}

/**
 * @param Articulo
 * @return Articulo
 */
Articulos Ferreteria::Cambioprodu(Articulos) {
    return;
}