
#include <forward_list>
#include "Header.h"
#include "Bazar.h"
#include "Iluminacion.h"
#include "Cables.h"
#include "Arthabituales.h"
#include "Cliente.h"
#include "Empleados.h"


int main() {

	Cliente Pablo("Pablo", 3234, "efectivo");

	Bazar art1(34.3, "madera", 3229, "marron", 22.2);
	Arthabituales art2(21.2, "metal", 2216, "clavo");
	Iluminacion art3(19.2, "plastico", 6429, 20, 68, "doble", "universal");
	Cables art4(13, "goma", 8536, 22, 80, 100);
	Bazar art5(70.8, "madera", 7329, "blanco", 38.5);
	Arthabituales art6(18.6, "metal", 2826, "tornillo");
	Iluminacion art7(14.6,"plastico", 6820, 40, 80, "simple", "USB");
	Cables art8(27, "goma", 5216, 20, 180, 200);

	 Pablo.agregarArt(art1);
	 Pablo.agregarArt(art2);
	 Pablo.agregarArt(art3);
	 Pablo.agregarArt(art4);
	 Pablo.agregarArt(art5);
	 Pablo.agregarArt(art6);
	 Pablo.agregarArt(art7);
	 Pablo.agregarArt(art8);

	 Empleados UNO ("Juan", "32.342.344", "Experiencia", "Vendedor");

	 UNO.generarPresupuesto(Cliente::ListaArtCli);

	 Cliente.pagar(float acumprecio);

	


}