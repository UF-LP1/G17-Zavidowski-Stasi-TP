/**
 * Project Untitled
 */
#include "Articulos.h"
#include "Header.h"
#include <forward_list>
#ifndef _CLIENTE_H
#define _CLIENTE_H
//prueba comentsrio 18 57
class Cliente {
public: 
 
void agregarArt(Articulos ListaAtrCli);

const string get_nombrecli();
    
const string get_numcliente();
    
string get_pago();
    
/**
 * @param Metodopago
 */
void set_pago(string Metodopago);
    
/**
 * @param Vendedor.cobrar
 */
bool pagar(float Total);
    
/**
 * @param Articulos
 */
Articulos elegirprod(Articulos producelegido);
private: 
    std::forward_list<Articulos> ListaArtCli;
    const string nombrecli;
    const int numcliente;
    string metodopago;
    Articulos lista;
    const string domicilio;
    enum llave llavenecesaria;
    string instalacionrota;
};

#endif //_CLIENTE_H