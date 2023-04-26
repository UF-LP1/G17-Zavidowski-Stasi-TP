#include "Presupuesto.h"
#include <forward_list>
#include "../../Model/Bazar.h"
#include "../../Model/Arthabituales.h"
#include "../../Model/Iluminacion.h"
int main() {
	std::forward_list<Articulos> ListaArt;
	ListaArt.push_front(Bazar(3.15, "madera", 3426, "blanco", 32));
	ListaArt.push_front(Bazar(8.20, "plastico", 3496, "negro", 29));
	ListaArt.push_front(Arthabituales(10.8, "metal", 4659, "clavo"));
	ListaArt.push_front(Arthabituales(21.2, "metal", 6342, "tornillo"));
	ListaArt.push_front(Arthabituales(29.2, "plastico", 2993, "tuerca"));
	ListaArt.push_front(Iluminacion(23.5, "plastico", 3488, 22, 82, "doble", "universal"));
	ListaArt.push_front(Arthabituales(445, "plastico", 7632, "canyo"));
	ListaArt.push_front(Iluminacion(21.9, "metal", 2110, 21, 80, "simple", "a"));

}

float generarPresupuesto(forward_list<Articulos> ListaArt) {
	int count = 0;
	float acumprecio;
	for (auto it = ListaArt.begin(); it != ListaArt.end(); ++it) {
		count++;
		acumprecio += it->get_precioart();
	
	}
	
}
