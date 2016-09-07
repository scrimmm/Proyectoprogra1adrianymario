#ifndef SALACINE_H
#define SALACINE_H
#include "Pelicula.h"
#include <ctype.h>
#include<windows.h>

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
	bool confirmaseleccion(char c);
	void aplicarComprados();  
	
						   
	~SalaCine();
};

#endif

