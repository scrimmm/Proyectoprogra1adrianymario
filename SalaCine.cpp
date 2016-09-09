#include "SalaCine.h"




SalaCine::SalaCine() 
{
	for (int i=0; i<6; i++)
	{
		for (int j=0; j<10; j++)
		{
			sala[i][j] = 0;
		}
	}
	
	peliexhibiendo=NULL; 
}

SalaCine::SalaCine(Pelicula *ptrPelicula)
{
	for (int i=0; i<6; i++)
	{
		for (int j=0; j<10; j++)
		{
			sala[i][j] = 0;
		}
	}
	
	peliexhibiendo=ptrPelicula;
	
}

bool SalaCine::seleccionAsiento(char f, int col )     //escoger los asientos
{
	tolower(f);                                      // siempre minusculas
	
	int fila, columna;
	
	if (sala [f][col]==0)
	{
		switch (f)
		{
		case 'a': fila=0; break;
		case 'b': fila=1; break;
		case 'c': fila=2; break;
		case 'd': fila=3; break;
		case 'e': fila=4; break;
		case 'f': fila=5; break;
		
		default: return false;
		}
		
		switch (col)
		{
		case 1: columna=0; break;
		case 2: columna=1; break;
		case 3: columna=2; break;
		case 4: columna=3; break;
		case 5: columna=4; break;
		case 6: columna=5; break;
		case 7: columna=6; break;
		case 8: columna=7; break;
		case 9: columna=8; break;
		case 10:columna=9; break;
		
		default: return false;
		}
		sala [fila][columna]=1;
		return true;
	}
	
	else return false;
}

void SalaCine::setasiento(int i, int j, int estado)
   {
	
			sala[i-1][j-1]=estado;
			
	}
	
int SalaCine::getAsiento(int i,int j)
{
	return sala[i][j];
}





bool SalaCine::confirmaseleccion(char c)   // me confirma los asiento comprados y los pasa a un estado 2 para poder mostrarlos seleccionados 
								 
{
	tolower(c);
	
	if (c=='s')
	{
		for (int i=0;i<6;i++)
		{
			for (int j=0;j<10;j++)
			{
				if (sala[i][j]==1)
				{
					sala[i][j]==2;
				}
			}
			
		}
		
	}
	
	else	
	{
		for (int i=0;i<6;i++)
		{
			for (int j=0;j<10;j++)
			{
				if (sala[i][j]==1)
				{
					sala[i][j]==0;
				}
			}
			
		}
		
		
		
	}
}




void SalaCine::aplicarComprados()//  deja los asientos en estado comprado 
{	
	
	for (int i=0;i<6;i++)
	{
		for (int j=0;j<10;j++)
		{
			if (sala[i][j]==2)
			{
				sala[i][j]==3;
			}
		}
		
	}
}























SalaCine::~SalaCine() 
{
	
}

