
#include "Cliente.h"
#include <algorithm>


Cliente::Cliente(string nombrecli_, int numcliente_, metodopago metodopagouso_, list<Articulos>ListaArtCli): nombrecli(nombrecli_), numcliente(numcliente_), ListaArtCli(ListaArtCli)
{
    this->metodopagouso = metodopagouso_;
  
}


Cliente::~Cliente()
{
}

void Cliente::agregarArt(Articulos nombre_art)
{
    ListaArtCli.push_back(nombre_art);
    return;
}

list<Articulos> Cliente::get_lista()
{
    return this->ListaArtCli;
}


const string Cliente::get_nombrecli() {
    return this->nombrecli;
}


const int Cliente::get_numcliente() {
    return this->numcliente;
}


metodopago Cliente::get_pago() {
    return this->metodopagouso;
}


void Cliente::set_pago(metodopago MetodoPagoUso) {
    this->metodopagouso = MetodoPagoUso;
    return;
}


float Cliente::pagar(float acumprecio) {
    return acumprecio; 
}

bool Cliente::CambiarProd(Articulos A, Articulos B)
{
    //int cant = ListaArtCli.size();
    bool esta = false;
    for (list<Articulos>::iterator it = get_lista().begin(); ; ++it)
    //for (Articulos&  a : ListaArtCli)
    //for(int i=0; i<cant; i++)
    {
           //if (a.get_numarticulo() == A.get_numarticulo())
        if(it->get_numarticulo() == B.get_numarticulo())
        {
            esta = true;
            ListaArtCli.erase(it);
            ListaArtCli.push_front(B);
        }
      
    }


    if (esta == false)
        throw exception("No se encontro el producto que quiere cambiar en la lista");

    return false;
}
// metodo cambiar producto que recibe dos articulos


