#include "Pelicula.h"
#include <stdio.h>
#include <windows.h>


int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); // para activar los cambios de color ;
	

	Pelicula peli1("Mario come pinga","porno","Doblada","VIP","Adultos +18", "3D", "asgfisadgoiasjgpasoifnsaoidmaspomfpsaokdmopsajkdpoaskfpoashfpiasjdpiasnbfipsajmdop");
	
	

	
		SetConsoleTextAttribute(hConsole, 34);// cuadro verde
		cout << "  "  ; 
		SetConsoleTextAttribute(hConsole, 7); 
		cout << "  " ;
		SetConsoleTextAttribute(hConsole, 34); 
		cout << "  "  ; 
		SetConsoleTextAttribute(hConsole, 7);
		SetConsoleTextAttribute(hConsole, 119);// cuadro gris
		cout << "  " << endl; 
		SetConsoleTextAttribute(hConsole, 204);// cuadro rojo
		cout << "  " << endl; 
	
		SetConsoleTextAttribute(hConsole, 7); // deja cuadro negro
		
		
		cout<<peli1.toString(); 
		
		

	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
