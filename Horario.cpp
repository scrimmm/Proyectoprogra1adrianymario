#include "Horario.h"

Horario::Horario() 
{
	hora=0;
	bloque=" ";
	
}
Horario::Horario(string b, int h)
{
	bloque=b;
	hora=h;
	
}
void Horario::setHora(float h)
{
	hora=h;
}
void Horario::setBloque(string b)
{
	bloque=b;
}

float Horario::getHora()
{
	return hora;
}
string Horario::getBloque()
{
	return bloque;
}
string Horario::toStrig()
{
	stringstream s;
	s<< "la hora de pelicula es: "<< hora<<endl;
	s<<" el bloque de la pelicula es: "<< bloque<<endl;
	
	return s.str();
}

Horario::~Horario() {
	
}

