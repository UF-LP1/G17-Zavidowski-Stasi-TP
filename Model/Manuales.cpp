/**
 * Project Untitled
 */


#include "Manuales.h"

/**
 * Manuales implementation
 */
Manuales::Manuales(string modelo_, string funcion_, float precioherra_, int tiempoalq_, string modouso_) : Herramientas(modelo_, funcion_, precioherra_, tiempoalq_), modouso(modouso_) {}

Manuales::~Manuales()
{
}

/**
 * @return void
 */
void Manuales::usar() {
    return;
}