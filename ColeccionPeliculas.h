#ifndef COLECCIONPELICULAS_H
#define COLECCIONPELICULAS_H
#include"Nodo.h"

class ColeccionPeliculas {
private:
	Nodo*primero;
	Nodo *actual;

protected:
public:
	ColeccionPeliculas();
	bool agregarpeli(Pelicula *ptrDato);
	string toString();
	string obtienePelicula(int n);

	~ColeccionPeliculas();
};

#endif

