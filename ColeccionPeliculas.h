#ifndef COLECCIONPELICULAS_H
#define COLECCIONPELICULAS_H

#include "ColeccionPeliculas.h"
#include "Pelicula.h"

class ColeccionPeliculas {
private:
	
	Pelicula *peli;
	ColeccionPeliculas *sigPeli;
	ColeccionPeliculas *primero,*actual;
	
protected:
public:
	ColeccionPeliculas();
	ColeccionPeliculas(Pelicula *ptrpeli,ColeccionPeliculas *ptrColeccionPeliculas);
	~ColeccionPeliculas();
};

#endif

