#include "Cartelera.h"

int main()
{
	Pelicula peli1("Mario come pinga","porno","Doblada","VIP","Adultos +18", "3D");
	
	Nodo N1(&peli1);
	Cartelera car1();
	cout << N1.toString();
	cout<<peli1.toString();
}
