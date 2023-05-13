

#include "Portatiles.h"


Portatiles::Portatiles(string modelo_, string funcion_, float precioherra_, int tiempoalq_, float seguro_,int duracionbat_) : Herramientas(modelo_, funcion_, precioherra_, tiempoalq_,seguro_){
    this->duracionbat = duracionbat_;
}

Portatiles::~Portatiles()
{
}


void Portatiles::cargar() {
    if (duracionbat == 0)
        cout << "Sin bateria, cargar la herramienta" << endl;
    return;
}


void Portatiles::usar() {
    return;
}