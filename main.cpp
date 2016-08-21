#include "Coleccion.h"


int main()
{
	
	
	Coleccion vec1;
	
	Persona per1 ("Adrian","Medina","Barrientos","114970402",1992,175,82.5);
	Persona per2("Adrian1","Medina1","Barrientos1","1149704021",19921,1.751,82.51);
	Persona per3("Daniela", "Valerio", "Chaves","204950755", 1991, 173.2, 60);
	
	vec1.InserPer(per1);
	vec1.InserPer(per2);
	vec1.InserPer(per3);
	
	cout<< vec1.toString();
	
	return 0;
}
