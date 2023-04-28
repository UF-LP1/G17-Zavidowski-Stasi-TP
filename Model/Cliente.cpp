/**
 * Project Untitled
 */
#include "Vendedor.h"
#include "Cliente.h"

/**
 * Cliente implementation
 */
Cliente::Cliente( string nombrecli_, int numcliente_, string metodopago_) :  nombrecli(nombrecli_), numcliente(numcliente_){
    this->metodopago = metodopago_;
}

Cliente::~Cliente()
{
}

void Cliente::agregarArt(Articulos nombre_art){
    ListaArtCli.push_front(nombre_art);
    return;
}

Articulos Cliente::get_lista()
{
    return this->ListaArtCli;
}

/**
 * @return const string
 */
const string Cliente::get_nombrecli() {
    return this->nombrecli;
}

/**
 * @return const string
 */
const int Cliente::get_numcliente() {
    return this->numcliente;
}

/**
 * @return string
 */
string Cliente::get_pago() {
    return this->metodopago;
}

/**
 * @param Metodopago
 * @return void
 */
void Cliente::set_pago(string Metodopago) {
    metodopago = Metodopago;
    return;
}

/**
 * @param Vendedor.cobrar
 * @return bool
 */
bool Cliente::pagar(Vendedor.cobrar) {
    return false;
}

/**
 * @param Articulos
 * @return Articulos
 */
