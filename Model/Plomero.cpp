
#include "Plomero.h"


Plomero::Plomero(string nombreemp_, string DNI_, string curriculum_, string rubro_, float sueldo_, string horariolab_) : Empleados(nombreemp_, DNI_, curriculum_, rubro_, sueldo_,horariolab_) {
  
}


string Plomero::arreglar(Arregloplomero arreglos) {
    
    switch (arreglos) {

    case Arregloplomero::instalacion:

        return "Se instalo correctamente ";

    case Arregloplomero::arreglodecanyerias:
        return "Tus canyerias ya funcionan correctamente";

    case Arregloplomero::perdidadeagua:
        return "Tu banyo ya no pierde agua";

    case Arregloplomero::banyotapado:
        return "Ya destapamos tu banyo";

    }
    return "";
   
}
float Plomero::cobrar(Arregloplomero arreglos)
{
    float precioinst= 200;
    float precioarr = 240;
    float precioagua = 180;
    float preciobanyo = 300;

    switch (arreglos) {

    case Arregloplomero::instalacion:

        return precioinst;

    case Arregloplomero::arreglodecanyerias:
        return precioarr;

    case Arregloplomero::perdidadeagua:
        return  precioagua;

    case Arregloplomero::banyotapado:
        return preciobanyo;

 
    }
    return 0;
}

Plomero::~Plomero()
{
}

