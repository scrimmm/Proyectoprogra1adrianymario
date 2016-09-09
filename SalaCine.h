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
	
	 
	
	
protected:
public:
	
	SalaCine();
	SalaCine(Pelicula *ptrPelicula);
	bool seleccionAsiento(char f, int col );   
	void setasiento(int i, int j, int estado);
	int getAsiento(int i,int j);
	bool confirmaseleccion(char c);    
	void aplicarComprados(); 
	void asignaLetraColumna(int i);
	void estadoAsientos(int i,int j);
	void gotoxy(int x, int y);
	void comprovacionestado(int i, int j);
	void creapasillos(int pos);
	void muestraPantalla(int posx,int posy);
	string toString();
	~SalaCine(); 
	
	
};

#endif
