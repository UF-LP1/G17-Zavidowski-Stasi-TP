/**
 * Project Untitled
 */


#include "Empleados.h"

/**
 * Empleados implementation
 */

Empleados::Empleados(string nombreemp_, string DNI_, string curriculum_, string rubro_) : nombreemp(nombreemp_), DNI(DNI_), curriculum(curriculum_), rubro(rubro_) {}

Empleados::~Empleados()
{
}

float Empleados::generarPresupuesto(forward_list<Articulos> ListaArt)
{
	int count = 0;
	float acumprecio = 0;
	for (auto it = ListaArt.begin(); it != ListaArt.end(); ++it) {
		count++;
		acumprecio += it->get_precioart();

	}
	return acumprecio;
}
/**
 * @return const string
 */
const string Empleados::get_nombreemp() {
    return this->nombreemp;
}

/**
 * @return const string
 */
const string Empleados::get_DNI() {
    return this->DNI;
}

/**
 * @return unsigned float
 */
 float Empleados::get_sueldo() {
    return this->sueldo;
}

/**
 * @return string
 */
string Empleados::get_horariolab() {
    return this->horariolab;
}

/**
 * @param NuevoSueldo
 * @return void
 */
void Empleados::set_sueldo(float NuevoSueldo) {
	sueldo = NuevoSueldo;
    return;
}

/**
 * @param NuevoHorario
 * @return void
 */
void Empleados::set_horariolab(string NuevoHorario) {
	horariolab = NuevoHorario;
    return;
}