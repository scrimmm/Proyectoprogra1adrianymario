#include "SalaCine.h"
#include <stdio.h>
#include <windows.h>
#include "Interfaz.h"
int main()
{
	
	Interfaz interfaz1;
	SalaCine sala1;
	

	interfaz1.imprimePasillo(0);
	interfaz1.imprimeUnLado(sala1,1,0);
	interfaz1.imprimePasillo(16);
	interfaz1.imprimePasillo(17);
	interfaz1.imprimeUnLado(sala1,18,5);
	interfaz1.imprimePasillo(34);
	
}	

