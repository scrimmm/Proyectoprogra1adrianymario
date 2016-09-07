#include "Cartelera.h"

Cartelera::Cartelera() {
	
}

void Cartelera::InsIni (Pelicula *d)
{
	Primero = new Nodo (d, Primero);
}


Cartelera::~Cartelera() 
{
	
}

