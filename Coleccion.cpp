#include "Coleccion.h"

Coleccion::Coleccion() 
{
	for(int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Sala [i][j] = 0;
		}
	}
}

Coleccion::~Coleccion() 
{
	
}

string Coleccion::toString()
{
	stringstream s;
	
	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			s << Sala [i][j];
		}
		s << endl;
	}
	return s.str();
}


