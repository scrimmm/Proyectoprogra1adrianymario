#include "SalaCine.h"
#include <stdio.h>
#include <windows.h>
#include "ColeccionPeliculas.h"
#include "Interfaz.h"
#include "Horario.h"

int main()
{
	Pelicula *ptrPelicula;
	
	Pelicula peli1("los vengadores","aventura","Doblada","VIP","Adultos +18", "3D", "asgfisadgoiasjgpasoifnsaoidmaspomfpsaokdmopsajkdpoaskfpoashfpiasjdpiasnbfipsajmdop","costa rica",1992);
	Pelicula peli2("condo sangrien","aventura","Doblada","VIP","Adultos +18", "3D", "asgfisadgoiasjgpasoifnsaoidmaspomfpsaokdmopsajkdpoaskfpoashfpiasjdpiasnbfipsajmdop","costa rica",2006);
	ptrPelicula=&peli1;
	
	SalaCine sala1(&peli1);
	
	SalaCine sala2 () ;
	
	ColeccionPeliculas coleccion1;

	coleccion1.agregarpeli(ptrPelicula);
	ptrPelicula=&peli2;
	
	coleccion1.agregarpeli(ptrPelicula);
	
	sala1.setAsiento(1,1,2);
	sala1.seleccionAsiento('a',1);
	Horario Horario1("Manana",6);
	Horario Horario2("Manana",9);
	Horario Horario3("tarde",12);
	Horario Horario4("tarde",3);
	Horario Horario5("noche",6);
	Horario Horario6("noche",8);
	
	Horario *ptrHorario;
	
	
	
	
	

	Interfaz inter1;
	inter1.compraTicket(sala1, coleccion1);
	
	
	
	
	
	
	
	cout<< coleccion1.toString();
	
}	






