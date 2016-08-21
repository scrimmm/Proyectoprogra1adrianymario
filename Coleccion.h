#ifndef COLECCION_H
#define COLECCION_H
#include "Persona.h"

const int fil = 6;
const int col = 10;

class Coleccion {
private:
	int Sala [fil][col];
protected:
public:
	Coleccion();
	~Coleccion();
	string toString();
	
};

#endif

