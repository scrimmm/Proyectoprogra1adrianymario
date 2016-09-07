#ifndef NODO_H
#define NODO_H
#include "Pelicula.h"

class Nodo 
{
private:
	Pelicula* dato;
	Nodo* Siguiente;
	
protected:
public:
	Nodo (Pelicula *);
	Nodo (Pelicula *, Nodo*);
	void setDato(Pelicula * );
	void setSiguiente (Nodo*);
	Pelicula *getPel();
	Nodo *getSiguiente();
	void Inserta(Pelicula *);
	string toString();
	~Nodo();
};

#endif

