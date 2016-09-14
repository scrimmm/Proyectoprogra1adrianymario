#ifndef CARTELERA_H
#define CARTELERA_H
#include"Pelicula.h"
#include "SalaCine.h"
#include"Horario.h"

class Cartelera {
	
	Pelicula *peli;
	SalaCine *sala;
	Horario *horario;
	int numsala;
	
private:
protected:
public:
	Cartelera();
	~Cartelera();
};

#endif

