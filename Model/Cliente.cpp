
#include "Cliente.h"
#include <algorithm>

int Cliente::cantclientes = 0;
Cliente::Cliente(string nombrecli_, int numcliente_, metodopago metodopagouso_, list<Articulos>ListaArtCli): nombrecli(nombrecli_), numcliente(numcliente_), ListaArtCli(ListaArtCli)
{
    this->metodopagouso = metodopagouso_;
    cantclientes++;
}


Cliente::~Cliente()
{
    cantclientes--;
}
int Cliente::get_cantclientes()
{
    return cantclientes;
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

string Cliente::CambiarProd(Articulos A, Articulos B)
{
  
    bool esta = false;
     for(std::list<Articulos>::iterator it = ListaArtCli.begin(); it != ListaArtCli.end(); it++)
    {
        float devolver = 0;
        float pedir = 0;
        if (it->get_numarticulo() == A.get_numarticulo())
        {
            esta = true;
            ListaArtCli.erase(it);
            ListaArtCli.push_front(B);
            if (A.get_precioart() > B.get_precioart()) {
                devolver = A.get_precioart() - B.get_precioart();
                return "tu vuelto es de $" + to_string(devolver);
                //cout << "tu vuelto es de $" << devolver << endl;
            }
            else
            {
                pedir = B.get_precioart() - A.get_precioart();
                return "debes pagar" + to_string(pedir);
             
            }
            break;
        }
       
    }
     if (esta == false)
         throw exception("No se encontro el producto que quiere cambiar en la lista");

    return "";
}

// metodo cambiar producto que recibe dos articulos


