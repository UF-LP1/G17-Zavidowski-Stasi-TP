/**
 * Project Untitled
 */
#include "Vendedor.h"
#include "Cliente.h"

/**
 * Cliente implementation
 */


void Cliente::agregarArt(Articulos nombre_art){
    ListaArtCli.push_front(nombre_art);
    return;
}

/**
 * @return const string
 */
const string Cliente::get_nombrecli() {
    return nullptr;
}

/**
 * @return const string
 */
const string Cliente::get_numcliente() {
    return nullptr;
}

/**
 * @return string
 */
string Cliente::get_pago() {
    return "";
}

/**
 * @param Metodopago
 * @return void
 */
void Cliente::set_pago(string Metodopago) {
    return;
}

/**
 * @param Vendedor.cobrar
 * @return bool
 */
bool Cliente::pagar( Vendedor.cobrar) {
    return false;
}

/**
 * @param Articulos
 * @return Articulos
 */
