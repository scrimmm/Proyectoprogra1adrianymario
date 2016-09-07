#ifndef CARTELERA_H
#define CARTELERA_H
#include "Nodo.h"

class Cartelera 
{
	private:
		Nodo *Primero;
		Nodo *Actual;
	protected:
	public:
		Cartelera();
		void InsIni(Pelicula *);
		~Cartelera();
};

#endif

