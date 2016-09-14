#ifndef INTERFAZ_H
#define INTERFAZ_H
#include "SalaCine.h"
#include "ColeccionPeliculas.h"


class Interfaz {
private:
	char letra;
	
	
	int numero;
	int totalasientos=0;
	int adulto=0;
	int	nino=0;
	
	
protected:
public:
	int getAdulto();
	int getNino();
	int getTotalasiento();
	void Menuprincipal();
	void seleccionaSala();
	void SeleccionAsientos(SalaCine &sala);
	void asientoNinoAdulto();
	void confirmaAsientos(SalaCine &sala);
	void compraTicket(SalaCine sala, ColeccionPeliculas cole);
	void seleccionPelicula(ColeccionPeliculas );
	
	Interfaz();
	~Interfaz();
};

#endif

