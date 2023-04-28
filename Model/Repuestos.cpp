/**
 * Project Untitled
 */


#include "Repuestos.h"

/**
 * Repuestos implementation
 */
Repuestos::Repuestos(string nombreproduc_, float tamanyo_, float precior_) : nombreproduc(nombreproduc_) {
    this->tamanyo = tamanyo_;
    this->precior = precior_;
}

Repuestos::~Repuestos()
{
}

/**
 * @return const string
 */
const string Repuestos::get_nomb() {
    return this->nombreproduc;
}

/**
 * @return const string
 */
const string Repuestos::get_descripcion() {
    return this->descripcion ;
}

/**
 * @return float
 */
float Repuestos::get_tam() {
    return this->tamanyo;
}

/**
 * @param NuevoTam
 * @return void
 */
void Repuestos::set_tam(float NuevoTam) {
    tamanyo = NuevoTam;
    return;
}