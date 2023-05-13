
#include "Articulos.h"
#include "Header.h"
#include <forward_list>
#include "llave.h"
#include "../Projecto tp2/Projecto tp2/metodopago.h"
#include "Vendedor.h"
#ifndef _CLIENTE_H
#define _CLIENTE_H

class Cliente {
public: 
    Cliente(string nombrecli_, int numcliente_, metodopago metodopagouso_, forward_list<Articulos>ListaArtCli);
    ~Cliente();
 
void agregarArt(Articulos nombre_art);

forward_list<Articulos> get_lista();

const string get_nombrecli();
    
const int get_numcliente();
    
metodopago get_pago();
    

void set_pago(metodopago MetodoPagoUso);
    

float pagar(float acumprecio);

bool CambiarProd(Articulos A, Articulos B);
             
    

private: 
    std::forward_list<Articulos> ListaArtCli;
    const string nombrecli;
    const int numcliente;
    metodopago metodopagouso;
    Articulos lista; 
    string domicilio;
    llave llavenecesaria;
    string instalacionrota;

   
};

#endif //_CLIENTE_H