
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
  
    bool esta = false;
     for(std::list<Articulos>::iterator it = ListaArtCli.begin(); it != ListaArtCli.end(); it++)
    {
        float devolver = 0;
        float pedir = 0;
        if (it->get_numarticulo() == B.get_numarticulo())
        {
            esta = true;
            ListaArtCli.erase(it);
            ListaArtCli.push_front(A);
            if (it->get_precioart() > B.get_precioart()) {
                devolver = B.get_precioart() - A.get_precioart();
                cout << "tu vuelto es de $" << devolver << endl;
            }
            else
            {
                pedir = A.get_precioart() - B.get_precioart();
                cout << "debes pagar" << pedir << endl;
            }
        }

       
    }

    if (esta == false)
        throw exception("No se encontro el producto que quiere cambiar en la lista");

    return false;
}
// metodo cambiar producto que recibe dos articulos


