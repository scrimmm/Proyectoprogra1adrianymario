#include "ColeccionPeliculas.h"


ColeccionPeliculas::ColeccionPeliculas() 
{
primero=actual=NULL;	
}



bool ColeccionPeliculas::agregarpeli(Pelicula *ptrDato)
									 
{
	primero = new Nodo (ptrDato, primero);
	
}



string ColeccionPeliculas::toString()
{
	stringstream s;
	actual= primero;
	int cont=1;
	
	while (actual!=NULL)
	{
		
		s<< cont<< " - "<< actual->getPel()->getNomPel();
		actual=actual->getSiguiente();
		s<<endl;
		cont++;
		
	}
	
	return s.str();
}

string ColeccionPeliculas::obtienePelicula(int n)
{
	actual=primero;
	
	if(n>1)
	{
		for (int i=1;i<=n;i++)
		{
			if(actual->getSiguiente()!=NULL)
			   
			{
				actual=actual->getSiguiente();
			}
			
		}
	}
	return actual->getPel()->getNomPel();

}


ColeccionPeliculas::~ColeccionPeliculas() {
	
}

