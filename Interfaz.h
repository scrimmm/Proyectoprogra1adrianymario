#ifndef INTERFAZ_H
#define INTERFAZ_H
#include <windows.h>
#include "Pelicula.h"
#include "SalaCine.h"

class Interfaz {
private:
	
	int columna;         
	char impresionfila;
	
protected:
public:
	Interfaz();
	void gotoxy(int x, int y);
	void imprimePasillo(int pos);
	void asignaLetraColumna(int i);
	void comprovacionEstado(SalaCine sala,int i, int j);
	void imprimeUnLado(SalaCine sala,int pos, int posj);
	
	
	
	~Interfaz();
};

#endif

