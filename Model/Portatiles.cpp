/**
 * Project Untitled
 */


#include "Portatiles.h"

/**
 * Portatiles implementation
 */
Portatiles::Portatiles(string modelo_, string funcion_, float precioherra_, int tiempoalq_, int duracionbat_) : Herramientas(modelo_, funcion_, precioherra_, tiempoalq_){
    this->duracionbat = duracionbat_;
}

Portatiles::~Portatiles()
{
}

/**
 * @return void
 */
void Portatiles::cargar() {
    return;
}

/**
 * @return void
 */
void Portatiles::usar() {
    return;
}