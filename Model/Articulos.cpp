/**
 * Project Untitled
 */


#include "Articulos.h"

/**
 * Articulos implementation
 */
Articulos::Articulos(float precioart_, string material_, int numarticulo_) : material(material_), numarticulo(numarticulo_) {
    this->precioart = precioart_;
}

Articulos::~Articulos()
{
}


/**
 * @return unsigned float
 */
float Articulos::get_precioart() {
    return this->precioart ;
}

/**
 * @return const string
 */
const string Articulos::get_material() {
    return this->material;
}

/**
 * @return const int
 */
const int Articulos::get_numarticulo() {
    return this->numarticulo;
}

/**
 * @param NuevoPrecio
 * @return void
 */
void Articulos::set_precio(float NuevoPrecio) {
    precioart = NuevoPrecio; 
    return;
}