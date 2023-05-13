

#include "Repuestos.h"


Repuestos::Repuestos(string nombreproduc_, float tamanyo_, float precior_) : nombreproduc(nombreproduc_) {
    this->tamanyo = tamanyo_;
    this->precior = precior_;
}

Repuestos::~Repuestos()
{
}


const string Repuestos::get_nomb() {
    return this->nombreproduc;
}


const string Repuestos::get_descripcion() {
    return this->descripcion ;
}


float Repuestos::get_tam() {
    return this->tamanyo;
}


void Repuestos::set_tam(float NuevoTam) {
    tamanyo = NuevoTam;
    return;
}