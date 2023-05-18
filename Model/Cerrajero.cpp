
#include "Cerrajero.h"


Cerrajero::Cerrajero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo, string horariolab, string servicio_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo, horariolab), servicio(servicio_) {

}

Cerrajero::~Cerrajero()
{
}


string Cerrajero::get_telefonoc() {
    return this->telefonoc;
}



void Cerrajero::set_telefonoc(string NuevoTel) {
    telefonoc = NuevoTel;
    return;
}

string Cerrajero::hacerllave(llave llavecita) {
   

    switch (llavecita){
   
    case llave::simple :
       
        return "Se hizo tu llave simple";

    case llave::codificadas:
        return "Se hizo tu llave codificada";

    case llave::dobletambor:
        return "Se hizo tu llave doble tambor";

    case llave::llavesmagneticas:
        return "Se hizo tu llave magnetica";

     }
    return "";
}

float Cerrajero::cobrar(llave llaveprecio)
{
    float precio1 = 80;
    float precio2 = 120;
    float precio3 = 180;
    float precio4 = 220;

    switch (llaveprecio) {

    case llave::simple:
       
        return precio1; 

    case llave::codificadas:
        
            return precio2;

    case llave::dobletambor:
      
        return precio3;

    case llave::llavesmagneticas:
      
        return precio4;

    }
    return 0;
}
