#include <forward_list>
#include "../../Model/Header.h"
#include "../../Model/Bazar.h"
#include "../../Model/Iluminacion.h"
#include "../../Model/Cables.h"
#include "../../Model/Arthabituales.h"
#include "../../Model/Cliente.h"
#include "../../Model/Vendedor.h"
#include "../../Projecto tp2/Projecto tp2/metodopago.h"


int main() {

	list<Articulos> list;
	Cliente* Pablo = new Cliente("Pablo", 3234, efectivo, list);


	Bazar art1(34.3, "madera", 3229, "marron", 22.2);
	Arthabituales art2(21.2, "metal", 2216, "clavo");
	Iluminacion art3(19.2, "plastico", 6429, 20, 68, "doble", "universal");
	Cables art4(13, "goma", 8536, 22, 80, 100);
	Bazar art5(70.8, "madera", 7329, "blanco", 38.5);
	Arthabituales art6(18.6, "metal", 2826, "tornillo");
	Iluminacion art7(14.6, "plastico", 6820, 40, 80, "simple", "USB");
	Cables art8(27, "goma", 5216, 20, 180, 200);
	Bazar ArtB(57.8, "plastico", 6619, "verde", 18.5);

	Pablo->agregarArt(art1);
	Pablo->agregarArt(art2);
	Pablo->agregarArt(art3);
	Pablo->agregarArt(art4);
	Pablo->agregarArt(art5);
	Pablo->agregarArt(art6);
	Pablo->agregarArt(art7);
	Pablo->agregarArt(art8);
	
	try {
		Pablo->CambiarProd(art1, ArtB);

	}
	catch (exception& e) {
		std::cerr << "Error, no se encontro el articulo" << e.what() << std::endl;
	}
	Vendedor UNO("Juan", "32.342.344", "Experiencia", "Vendedor", 89000, "12:30 a 17:30", 20, "efectivo");

	float acumprecio = UNO.cobrar(Pablo);

	Pablo->pagar(acumprecio);

	cout << "El total es: $" << acumprecio << endl; 

	delete Pablo;

	return 0;

}