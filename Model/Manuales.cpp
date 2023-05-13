

#include "Manuales.h"


Manuales::Manuales(string modelo_, string funcion_, float precioherra_, int tiempoalq_, float seguro_, string modouso_) : Herramientas(modelo_, funcion_, precioherra_, tiempoalq_, seguro_), modouso(modouso_) {}

Manuales::~Manuales()
{
}


void Manuales::usar() {
    return;
}