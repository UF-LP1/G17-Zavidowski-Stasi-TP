
#include "Empleados.h"


Empleados::Empleados(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_) : nombreemp(nombreemp_), DNI(DNI_), curriculum(curriculum_), rubro(rubro_) {
	this->sueldo = sueldo_;
	this->horariolab = horariolab_;
}

Empleados::~Empleados()
{
}


const string Empleados::get_nombreemp() {
    return this->nombreemp;
}


const string Empleados::get_DNI() {
    return this->DNI;
}

 float Empleados::get_sueldo() {
    return this->sueldo;
}


string Empleados::get_horariolab() {
    return this->horariolab;
}


void Empleados::set_sueldo(float NuevoSueldo) {
	sueldo = NuevoSueldo;
    return;
}

void Empleados::set_horariolab(string NuevoHorario) {
	horariolab = NuevoHorario;
    return;
}