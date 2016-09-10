#include "Cartelera.h"

int main()
{
	Pelicula peli1("Mario", "nnn", "Doblada", 1, 2, "3D");
	
	Nodo N1(&peli1);
	

	cout<<peli1.toString();
	
}
