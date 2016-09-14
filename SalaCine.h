#ifndef SALACINE_H
#define SALACINE_H
#include <ctype.h>
#include <windows.h>
#include "Pelicula.h"




using namespace std;

class SalaCine {
private:
	Pelicula *peliexhibiendo;   
	int sala[6][10];
	int columna;         
	char impresionfila;
	int numerosala;

	
protected:
public:
	
	SalaCine();
	SalaCine(Pelicula *ptrPelicula);
	void seleccionAsiento(char f, int col );   
	void setAsiento(int i, int j, int estado);
	int getAsiento(int i,int j);
	bool confirmaseleccion( char c);    
	void aplicarComprados(); 
	
	
	void gotoxy(int x, int y);
	void imprimePasillo(int pos);
	void asignaLetraColumna(int i);
	void comprovacionEstado(SalaCine sala,int i, int j);
	void imprimeUnLado(SalaCine sala,int pos, int posj);
	void impremesalaCompleta(SalaCine sala);
	~SalaCine(); 
	
	
};

#endif
