
#include "Articulos.h"
#include "Bazar.h"
#include "Iluminacion.h"
#include "Arthabituales.h"
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
    for (Articulos* articulo : //que le paso aca? get lista????()) {
        Articulos->imprimir(); // Imprime los atributos comunes de Articulos

        
        if (Bazar* bazar = dynamic_cast<Bazar*>(articulo)) {
            // Imprime los atributos específicos de Bazar
            std::cout << "Color: " << bazar->get_color() << std::endl;
            std::cout << "Tamanyo: " << bazar->get_tamanyo() << std::endl;
        }

        
        if (Iluminacion* iluminacion = dynamic_cast<Iluminacion*>(articulo)) {
            // Imprime los atributos específicos de Iluminacion
            std::cout << "Potencia: " << iluminacion->get_potencia() << std::endl;
            std::cout << "Tipo: " << iluminacion->get_consumo() << std::endl;
        }
        if (Arthabituales* arthabituales = dynamic_cast<Arthabituales*>(articulo)) {
            // Imprime los atributos específicos de Iluminacion
            std::cout << "Potencia: " << iluminacion->get_potencia() << std::endl;
            std::cout << "Tipo: " << iluminacion->get_consumo() << std::endl;
        }
    }
   

}

