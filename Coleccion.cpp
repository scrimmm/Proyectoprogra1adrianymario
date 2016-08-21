#include "Coleccion.h"






Coleccion::Coleccion() 
{
	tamano=50;
	cantidad=0;
	
	
}

Coleccion::Coleccion(int n)
{
	cantidad=0;
	
	tamano=n;
	
}

void Coleccion::setCantidad(int n)
{
	cantidad=n;
}
int Coleccion::getCantidad()
{
	return cantidad;
}
int Coleccion::getTamano()
{
	return tamano;
}


void Coleccion::InserPer(Persona &per)
{
	if (cantidad<tamano)
	{
		vector[cantidad]=per;
		setCantidad(cantidad+1);
		
	}
}

string Coleccion::toString()
{
	stringstream s;
	
	for(int i=0; i<cantidad;i++)
	{
		s<< vector[i].toString()<<endl;
	}
	return s.str();
}



Coleccion::~Coleccion() 
{
	
	
}

