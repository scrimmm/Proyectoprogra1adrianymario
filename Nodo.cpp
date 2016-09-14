#include "Nodo.h"

Nodo::Nodo(Pelicula *d) 
{
	dato = d;
	Siguiente = NULL;
}

Nodo::Nodo (Pelicula *d, Nodo *s)
{
	dato = d;
	Siguiente = s;
}

void Nodo::setDato(Pelicula *d)
{
	dato = d;
}

void Nodo::setSiguiente (Nodo *s)
{
	Siguiente = s;
}

Pelicula *Nodo::getPel()
{
	return dato;
}

Nodo *Nodo::getSiguiente()
{
	return Siguiente;
}

string Nodo::toString ()
{
	stringstream s;
	
	s << getPel()->toString() << endl;
	
	return s.str();
}

Nodo::~Nodo() 
{
	
}
