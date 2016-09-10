#include "Factura.h"

Factura::Factura(Pelicula *n, Pelicula *ts) 
{
	Nombre = n;
	TipoSala = ts;
}

int Factura::TotPag(int n, int a, int s, int t)
{
	int N, A;
	int z = 0;
	int b = 1;
	int c = 1;
	
	
	if (s == 1)
	{
		N = 3000;
		A = 5000;
	}
	
	else 
	{
		N = 4500;
		A = 6500;
	}
	
	for (int i = 0; i < t; i++)
	{
		
		if (b < n)
		{
			z =+ N;
			b++;
		}
		
		else (c < a);
		{
			
			z =+ A;
			c ++;
		}
		
	}
	
	return z;

}



Factura::~Factura() 
{
	
}

