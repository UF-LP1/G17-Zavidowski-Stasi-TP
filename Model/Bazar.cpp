/**
 * Project Untitled
 */


#include "Bazar.h"

/**
 * Bazar implementation
 */
Bazar::Bazar(float precioart_, string material_, int numarticulo_, string color_, float tamanyo_) : Articulos(precioart_, material_, numarticulo_), tamanyo(tamanyo_) {
    this->color = color_;
}

Bazar::~Bazar()
{
}

/**
 * @return const string
 */
const string Bazar::get_color() {
    return nullptr;
}

/**
 * @return const float
 */
const float Bazar::get_tamanyo() {
    return;
}