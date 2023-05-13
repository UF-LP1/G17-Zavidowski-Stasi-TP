
#include "Herramientas.h"


Herramientas::Herramientas(string modelo_, string funcion_, float precioherra_, int tiempoalq_, float seguro_) : modelo(modelo_), funcion(funcion_) {
    this->precioherra = precioherra_;
    this->tiempoalq = tiempoalq_;
    this->seguro = seguro_;
}

Herramientas::~Herramientas()
{
}

const string Herramientas::get_modelo() {
    return this->modelo;
}

float Herramientas::get_precioherra() {
    return this->precioherra;
}

float Herramientas::get_seguro() {
    return this->seguro;
}

int Herramientas::get_tiempoalq() {
    return this->tiempoalq ;
}

const string Herramientas::get_funcion() {
    return this->funcion;
}

void Herramientas::set_precio(float NuevoPre) {
    precioherra = NuevoPre;
    return;
}

void Herramientas::set_seguro(float NuevoSeguro) {
    seguro = NuevoSeguro;
    return;
}

void Herramientas::set_tiempoalq(int TiempoNuevo) {
    tiempoalq = TiempoNuevo;
    return;
}

int Herramientas::devolverseguro() {
    if (tiempoalq < 30)
        return seguro;
    else
        return 0;
}