/**
 * Project Untitled
 */
#include "Articulos.h"
#include "Header.h"
#include <forward_list>
#ifndef _CLIENTE_H
#define _CLIENTE_H

class Cliente {
public: 
    Cliente( string nombrecli_, int numcliente_, string metodopago_);
    ~Cliente();
 
void agregarArt(Articulos nombre_art);

Articulos get_lista();

const string get_nombrecli();
    
const int get_numcliente();
    
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
private: 
    std::forward_list<Articulos> ListaArtCli;
    const string nombrecli;
    const int numcliente;
    string metodopago;
    Articulos lista; 
    string domicilio;
    enum llave llavenecesaria;
    string instalacionrota;

   
};

#endif //_CLIENTE_H