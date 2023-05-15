
#include "Cliente.h"



Cliente::Cliente(string nombrecli_, int numcliente_, metodopago metodopagouso_): nombrecli(nombrecli_), numcliente(numcliente_)
{
    this->metodopagouso = metodopagouso_;
    this->ListaArtCli = ListaArtCli;
}


Cliente::~Cliente()
{
}

void Cliente::agregarArt(Articulos nombre_art)
{
    ListaArtCli.push_front(nombre_art);
    return;
}

forward_list<Articulos> Cliente::get_lista()
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
 
    std::forward_list<int>::iterator it;
    bool esta = false;
    for (forward_list<Articulos>::iterator it = get_lista().begin(); it != get_lista().end(); ++it)
    {
        if (it->get_numarticulo() == A.get_numarticulo())
        {
            esta = true;
            ListaArtCli.erase_after(it);
            ListaArtCli.push_front(B);
        }
      
    }
    if (esta == false)
        throw exception("No se encontro el producto que quiere cambiar en la lista");

    return false;
}
// metodo cambiar producto que recibe dos articulos


