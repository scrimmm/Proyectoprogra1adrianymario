#include "Interfaz.h"


HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);// para activar los cambios de colores;

Interfaz::Interfaz() 
{
	
}

void Interfaz::gotoxy(int x, int y)
{
	static HANDLE h = NULL;  
	if(!h)
	   h = GetStdHandle(STD_OUTPUT_HANDLE);
	   COORD c = { x, y };  
	   SetConsoleCursorPosition(h,c);
}


void Interfaz::asignaLetraColumna(int i)
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

void Interfaz::imprimePasillo(int pos)
{
	for(int i=0;i<6;i++)
		
	{
		
		gotoxy(pos,i);
		SetConsoleTextAttribute(hConsole, 187);
		cout<<" " <<endl;
		SetConsoleTextAttribute(hConsole, 7);
	}
}


void Interfaz::comprovacionEstado(SalaCine sala,int i, int j)
{
	
	if (sala.getAsiento(i,j)==0)
	{
		SetConsoleTextAttribute(hConsole, 160); //estado 0
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	if (sala.getAsiento(i,j)==1)
	{
		SetConsoleTextAttribute(hConsole, 240);// estado 1
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	
	if (sala.getAsiento(i,j)==2)
	{
		SetConsoleTextAttribute(hConsole, 192);   // estado 2
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
	
	if (sala.getAsiento(i,j)==3)
	{
		SetConsoleTextAttribute(hConsole, 192); //estado 3
		cout<< columna << impresionfila<<" ";
		SetConsoleTextAttribute(hConsole, 7);
	}
}

void Interfaz::imprimeUnLado(SalaCine sala,int pos,int posj)
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








Interfaz::~Interfaz() {
	
}

