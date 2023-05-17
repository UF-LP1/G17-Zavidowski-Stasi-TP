
#include "Bazar.h"


Bazar::Bazar(float precioart_, string material_, int numarticulo_, string color_, float tamanyo_) : Articulos(precioart_, material_, numarticulo_),color(color_), tamanyo(tamanyo_) {

}

Bazar::~Bazar()
{
}

const string Bazar::get_color() {
    return this->color;
}


const float Bazar::get_tamanyo() {
    return this->tamanyo;
}
void Bazar::imprimir()
{
    Articulos::imprimir();
    //cout << "Color:" "Tamanyo:" << color << tamanyo << endl;
    cout << "Color: " << color<<endl; 
    cout << "Tamanyo: " << tamanyo<<endl ; 
}
