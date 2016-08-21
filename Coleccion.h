#ifndef COLECCION_H
#define COLECCION_H


#include "Persona.h"



class Coleccion {
private:
	
	int tamano;
	int cantidad;
	Persona vector[50];
	
protected:
public:
	Coleccion();
	Coleccion(int);
	void setCantidad(int n);
	int getCantidad();
	int getTamano();
	void InserPer(Persona  &per);
	string toString();
	~Coleccion();
};

#endif

