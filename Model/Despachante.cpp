
#include "Despachante.h"


Despachante::Despachante(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo_,horariolab_) {
  
}

Despachante::~Despachante()
{
}




string Despachante::cobrarenvio(int dom) {
    float costoenvio = 0;
    if (dom < 30) {
        costoenvio = 200;
            return "El costo de envio es de $ "+ to_string(costoenvio);
    }
    else {
        costoenvio = 300;
        return "El costo de envio es $ "+ to_string(costoenvio);
    }
        
    return 0;
}