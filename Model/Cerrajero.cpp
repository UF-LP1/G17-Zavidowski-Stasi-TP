/**
 * Project Untitled
 */

#include "Empleados.h"
#include "Cerrajero.h"

/**
 * Cerrajero implementation
 */

Cerrajero::Cerrajero(string nombreemp_, string DNI_, string curriculum_, string rubro_, llave tipollave_, string servicio_): Empleados(nombreemp_, DNI_, curriculum_, rubro_)
{
}

Cerrajero::~Cerrajero()
{
}

/**
 * @return enum llave
 */
enum llave Cerrajero::get_tipollave() {
    return this->tipollave;
}

/**
 * @return float
 */
float Cerrajero::get_precio() {
    return this->precio;
}

/**
 * @return string
 */
string Cerrajero::get_telefonoc() {
    return this->telefonoc;
}

/**
 * @param Nuevopre
 * @return void
 */
void Cerrajero::set_precio(float Nuevopre) {
    precio = Nuevopre;
    return;
}

/**
 * @param NuevoTel
 * @return void
 */
void Cerrajero::set_telefonoc(string NuevoTel) {
    telefonoc = NuevoTel;
    return;
}

/**
 * @param Cliente.llavenecesaria
 * @return enum llave
 */
enum llave Cerrajero::hacerllave(Cliente.llavenecesaria) {

    return;
}