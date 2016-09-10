#ifndef FACTURA_H
#define FACTURA_H
#include "Pelicula.h"

class Factura 
{
private:
	Pelicula *Nombre;
	Pelicula *TipoSala;
protected:
public:
	Factura(Pelicula *n, Pelicula *ts);
	int TotPag();
	int TotPag(int n, int a, int s, int t);
	string toString();
	~Factura();
};

#endif

