#include "SalaCine.h"

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


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
	numerosala=0;
	
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



void SalaCine::seleccionAsiento(char f, int col)     //escoger los asientos
{
	                                      
	
	int fila;
	
	
	
		switch (f)
		{
		case 'A': fila=0; break;
		
		case 'B': fila=1; break;
		
		case 'C': fila=2; break;
		
		case 'D': fila=3; break;
		
		case 'E': fila=4; break;
		
		case 'F': fila=5; break;
		
		
		}
		
	
		
	sala[fila][col]=1;
	
	
	
}

void SalaCine::setAsiento(int i, int j, int estado)
{
	
	sala[i-1][j-1]=estado;
	
}

int SalaCine::getAsiento(int i,int j)
{
	return sala[i][j];
}





bool SalaCine::confirmaseleccion(char c)   // me confirma los asiento comprados y los pasa a un estado 2 para poder mostrarlos seleccionados 
								 
{
	
	
	if (c =='S')
	{
		for (int i=0;i<6;i++)
		{
			for (int j=0;j<10;j++)
			{
				if (sala[i][j]==1)
				{
					sala[i][j]=2;
					
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
					sala[i][j]=0;
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
				sala[i][j]=3;
				
			}
		}
		
	}

}




void SalaCine::gotoxy(int x, int y)    // inicia metodos de impresion de la sala
{
	static HANDLE h = NULL;  
	if(!h)
	   h = GetStdHandle(STD_OUTPUT_HANDLE);
	   COORD c = { x, y };  
	   SetConsoleCursorPosition(h,c);
}


void SalaCine::asignaLetraColumna(int i)
{
	switch (i)
	{
	case 0: impresionfila='A'; break;
	case 1: impresionfila='B'; break;
	case 2: impresionfila='C'; break;
	case 3: impresionfila='D'; break;
	case 4: impresionfila='E'; break;
	case 5: impresionfila='F'; break;
	
	}	
}

void SalaCine::imprimePasillo(int pos)
{
	for(int i=0;i<6;i++)
		
	{
		
		gotoxy(pos,i);
		SetConsoleTextAttribute(hConsole, 187);
		cout<<" " <<endl;
		SetConsoleTextAttribute(hConsole, 7);
	}
}


void SalaCine::comprovacionEstado(SalaCine sala,int i, int j)
{
	
	if (sala.getAsiento(i,j)==0)
	{
		SetConsoleTextAttribute(hConsole, 160); 
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	if (sala.getAsiento(i,j)==1)
	{
		SetConsoleTextAttribute(hConsole, 240);
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	
	if (sala.getAsiento(i,j)==2)
	{
		SetConsoleTextAttribute(hConsole, 120);  
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	if (sala.getAsiento(i,j)==3)
	{
		SetConsoleTextAttribute(hConsole, 192);
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
}

void SalaCine::imprimeUnLado(SalaCine sala,int pos,int posj)
{
	for (int i=0;i<6;i++)
	{
		gotoxy(pos,i);
		for (int j=posj;j<posj+5;j++)
		{
			asignaLetraColumna(i);
			columna=j+1;
			comprovacionEstado(sala, i,j);
			
		}
		cout<<endl;
		
	}
	
}


void SalaCine::impremesalaCompleta(SalaCine sala)
{
	
	sala.imprimePasillo(0);
	sala.imprimeUnLado(sala,1,0);
	sala.imprimePasillo(16);
	sala.imprimePasillo(17);
	sala.imprimeUnLado(sala,18,5);
	sala.imprimePasillo(34);
}


// fin metodos de impresion de la sala










SalaCine::~SalaCine() 
{
	
}
