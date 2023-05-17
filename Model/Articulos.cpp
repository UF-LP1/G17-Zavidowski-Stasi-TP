
#include "Articulos.h"

Articulos::Articulos(float precioart_, string material_, int numarticulo_) : material(material_), numarticulo(numarticulo_) {
    this->precioart = precioart_;
}

Articulos::~Articulos()
{
}


float Articulos::get_precioart() {
    return this->precioart ;
}


const string Articulos::get_material() {
    return this->material;
}


const int Articulos::get_numarticulo() {
    return this->numarticulo;
}


void Articulos::set_precio(float NuevoPrecio) {
    precioart = NuevoPrecio; 
    return;
}

void Articulos::imprimir()
{
    cout << "Precio: "  << precioart<< endl;;
    cout << "Material: " << material<< endl;
    cout << "Numero de articulo: " << numarticulo << endl; ;

}
