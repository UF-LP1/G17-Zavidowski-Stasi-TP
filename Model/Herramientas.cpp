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
    return this->modelo;
}

/**
 * @return unsigned float
 */
float Herramientas::get_precioherra() {
    return this->precioherra;
}

/**
 * @return float
 */
float Herramientas::get_seguro() {
    return this->seguro;
}

/**
 * @return unsigned int
 */
int Herramientas::get_tiempoalq() {
    return this->tiempoalq ;
}

/**
 * @return const string
 */
const string Herramientas::get_funcion() {
    return this->funcion;
}

/**
 * @param NuevoPre
 * @return void
 */
void Herramientas::set_precio(float NuevoPre) {
    precioherra = NuevoPre;
    return;
}

/**
 * @param NuevoSeguro
 * @return void
 */
void Herramientas::set_seguro(float NuevoSeguro) {
    seguro = NuevoSeguro;
    return;
}

/**
 * @param TiempoNuevo
 * @return void
 */
void Herramientas::set_tiempoalq(int TiempoNuevo) {
    tiempoalq = TiempoNuevo;
    return;
}

/**
 * @return int
 */
int Herramientas::devolverseguro() {
    if (tiempoalq < 30)
        return seguro;
    else
        return 0;
}