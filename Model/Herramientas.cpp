/**
 * Project Untitled
 */


#include "Herramientas.h"

/**
 * Herramientas implementation
 */
Herramientas::Herramientas(string modelo_, string funcion_, float precioherra_, int tiempoalq_) : modelo(modelo_), funcion(funcion_) {
    this->precioherra = precioherra_;
    this->tiempoalq = tiempoalq_;
}

Herramientas::~Herramientas()
{
}

/**
 * @return const string
 */
const string Herramientas::get_modelo() {
    return nullptr;
}

/**
 * @return unsigned float
 */
float Herramientas::get_precioherra() {
    return;
}

/**
 * @return float
 */
float Herramientas::get_seguro() {
    return 0.0;
}

/**
 * @return unsigned int
 */
int Herramientas::get_tiempoalq() {
    return ;
}

/**
 * @return const string
 */
const string Herramientas::get_funcion() {
    return nullptr;
}

/**
 * @param NuevoPre
 * @return void
 */
void Herramientas::set_precio(float NuevoPre) {
    return;
}

/**
 * @param NuevoSeguro
 * @return void
 */
void Herramientas::set_seguro(float NuevoSeguro) {
    return;
}

/**
 * @param TiempoNuevo
 * @return void
 */
void Herramientas::set_tiempoalq(int TiempoNuevo) {
    return;
}

/**
 * @return int
 */
int Herramientas::devolverseguro() {
    return 0;
}