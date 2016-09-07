#include "Cartelera.h"

Cartelera::Cartelera() {
	
}

void Cartelera::InsIni (Pelicula *d)
{
	Primero = new Nodo (d, Primero);
}

string Cartelera::toString()
{
	Actual = Primero;
	stringstream s;
	cout << "La Cartelera es: " << endl;
	while (Actual ->getSiguiente() != NULL)
	{
		s << Actual ->getPel() ->toString();
		Actual = Actual ->getSiguiente();
	}
	return s.str();
}

Cartelera::~Cartelera() 
{
	
}

