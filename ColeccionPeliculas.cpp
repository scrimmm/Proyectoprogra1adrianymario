#include "ColeccionPeliculas.h"


ColeccionPeliculas::ColeccionPeliculas() 

{
	primero=actual=NULL;
	
}

ColeccionPeliculas::ColeccionPeliculas(Pelicula *ptrpeli,ColeccionPeliculas *ptrSigNodo)
{
	peli=ptrpeli;
	sigPeli=ptrSigNodo;
}



ColeccionPeliculas::~ColeccionPeliculas() 

{
	
}

