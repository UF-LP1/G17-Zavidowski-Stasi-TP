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
    return ;
}

/**
 * @return float
 */
float Cerrajero::get_precio() {
    return 0.0;
}

/**
 * @return string
 */
string Cerrajero::get_telefonoc() {
    return "";
}

/**
 * @param Nuevopre
 * @return void
 */
void Cerrajero::set_precio(float Nuevopre) {
    return;
}

/**
 * @param NuevoTel
 * @return void
 */
void Cerrajero::set_telefonoc(string NuevoTel) {
    return;
}

/**
 * @param Cliente.llavenecesaria
 * @return enum llave
 */
enum llave Cerrajero::hacerllave(Cliente.llavenecesaria) {
    return;
}