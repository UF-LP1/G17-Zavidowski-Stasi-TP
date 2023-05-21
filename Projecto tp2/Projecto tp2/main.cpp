#include <list>
#include <Windows.h>
#include <ctime>
#include <cstdlib>
#include "../../Model/Herramientas.h"
#include "Arreglosplomero.h"
#include "../../Model/Header.h"
#include "../../Model/Bazar.h"
#include "../../Model/Iluminacion.h"
#include "../../Model/Cables.h"
#include "../../Model/Arthabituales.h"
#include "../../Model/Cliente.h"
#include "../../Model/Vendedor.h"
#include "../../Model/Cerrajero.h"
#include "../../Projecto tp2/Projecto tp2/metodopago.h"
#include "../../Model/Plomero.h"
#include "../../Model/Despachante.h"



llave generarLlaveAleatoria() { //genero aleatoriamente la llave que necesita mi cliente
	std::srand(std::time(nullptr));
    int valorrandom = std::rand() % 4;
	return static_cast<llave>(valorrandom);
}

Arregloplomero generarproblemaaleatorio() {//genero aleatoriamente el problema que tiene mi cliente
	std::srand(std::time(nullptr));
	int valorrandom = std::rand() % 4;
	return static_cast<Arregloplomero>(valorrandom);
}



int main() {
	float dinero = 0;
	list<Articulos> lista;
	list<Articulos> lista2;

	Cliente* Pablo = new Cliente("Pablo", 3234, efectivo,lista);
	Cliente* Laura = new Cliente("Laura", 7632, debito, lista2);

	llave llavecita = generarLlaveAleatoria();
	Arregloplomero arreglos = generarproblemaaleatorio();

	Bazar art1 (34.3, "madera", 3229, "marron", 22.2);
	Arthabituales art2 (21.2, "metal", 2216, "clavo");
	Iluminacion art3(19.2, "plastico", 6429, 20, 68, "doble", "universal");
	Cables art4 (13, "goma", 8536, 22, 80, 100);
	Bazar art5 (70.8, "madera", 7329, "blanco", 38.5);
	Arthabituales art6 (18.6, "metal", 2826, "tornillo");
	Iluminacion art7 (14.6, "plastico", 6820, 40, 80, "simple", "USB");
	Cables art8 (27, "goma", 5216, 20, 180, 200);// producto que quiero cambiar
	Bazar ArtB (57.8, "plastico", 6619, "verde", 18.5);// producto nuevo que me quiero llevar

	Pablo->agregarArt(art1);
	Pablo->agregarArt(art2);
	Pablo->agregarArt(art3);
	Pablo->agregarArt(art4);
	Pablo->agregarArt(art5);
	Pablo->agregarArt(art6);
	Pablo->agregarArt(art7);
	Pablo->agregarArt(art8);
	
	Laura->agregarArt(art3);
	Laura->agregarArt(art5);


	Vendedor UNO("Juan", "32.342.344", "Experiencia", "Vendedor", 89000, "12:30 a 17:30", 20, "efectivo");
	Cerrajero Pedro("Pedro", "29.432.765", "Experiencia", "Cerrajero", 5900, "9:00 a 15:30", "reparacion");
	Plomero Luis("Luis", "31.632.665", "experiencia", "cerrajero", 6700, "9:00 a 17:30");
	Despachante Sergio("Sergio", "32.811.352", "exp", "Despachante", 5400, "9:00 a 13:00");


	cout << "\033[4;32m";
	cout << "cliente:" << Pablo->get_nombrecli() << endl;
	cout << "numero de cliente:" << Pablo->get_numcliente() << endl;
	cout << "\033[0m" << endl;
	cout<< Pedro.hacerllave(llavecita);
	cout << endl; 
	cout<< Luis.arreglar(arreglos); 
	cout << endl;
	
	float acumprecio = UNO.cobrar(Pablo) + Pedro.cobrar(llavecita)+ Luis.cobrar(arreglos) ; //suma total a pagar del cliente, incluyendo cerrajeria y plomero
	Pablo->pagar(acumprecio);
	cout << endl; 
	
	for (Articulos& articulos : Pablo->get_lista()) {//imprime solo los atributos de Articulos, ver dynamic cast para la proxima
		cout << "Articulo" << endl;
		articulos.imprimir();
	}
	cout << "El total es: $" << acumprecio << endl;
	cout << "\033[4;32m";
	cout << "Con cuanto dinero va a pagar?" << endl;
	cout << "\033[0m";
	cin >> dinero;
	if (dinero >= acumprecio)
		cout << "Su vuelto es de $ " << dinero - acumprecio << endl;
	else
		cout << "No tiene suficiente dinero para efectuar la compra" << endl;
	
	try {
		cout << "Se realizo con exito el cambio, " << Pablo->CambiarProd(art8, ArtB) << endl;

	}
	catch (exception& e) {
		std::cerr << "Error" << e.what() << std::endl;
	}

	cout << "\033[4;35m";
	cout << "cliente:" << Laura->get_nombrecli() << endl;
	cout << "numero de cliente:" << Laura->get_numcliente() << endl;
	cout << "\033[0m";

	int domicilio;
	cout << "Ingrese a cuantas cuadras de la ferreteria se encuentra:" << endl;// mi cliente utiliza la posibilidad de entrega a domicilio
	cin >> domicilio;
	cout << Sergio.cobrarenvio(domicilio);
	cout << endl;
	cout << "primer articulo" << endl;  art6.imprimir(); cout << endl;
	cout << "segundo articulo" << endl;  art4.imprimir(); cout << endl;


	cout << "La cantidad de clientes que hay es: " << Cliente::get_cantclientes();//implementacion de mi atributo static

	const char* videoLink = "https://www.youtube.com/watch?v=pOZvokjWbXM";
	std::wstring wideVideoLink(videoLink, videoLink + strlen(videoLink));
	Sleep(3000);
	ShellExecute(NULL, L"open", wideVideoLink.c_str(), NULL, NULL, SW_SHOWNORMAL);

	delete Pablo;
	delete Laura;

	return 0;

}