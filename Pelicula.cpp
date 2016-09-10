#include "Pelicula.h"

Pelicula::Pelicula()
				   
{
	NomPel= " ";
	Gen=" ";
	Leng=" ";
	Sala=0;
	TipPubli=0;
	Dimen=" ";
}

Pelicula::Pelicula(string nombre, string genero, string len, int tipoSala, int tipoPublico, string dimension)
				   
{
	NomPel= nombre;
	Gen= genero;
	Leng= len;
	Sala= tipoSala;
	TipPubli=tipoPublico;
	Dimen=dimension;
}


void Pelicula::setNomPel(string nom)
{
	NomPel=nom;
	
}

void Pelicula::setGenero(string gen)
{
	Gen=gen;
}

void Pelicula::setLeng(string len)
{
	Leng=len;
}

void Pelicula::setSala(int tipSal)
{
	Sala=tipSal;
}

void Pelicula::setTipPubli(int tipPub)
{
	TipPubli=tipPub;
}

void Pelicula::setDimension(string dimen)
{
	Dimen=dimen;
}

string Pelicula::getNomPel()
{
	return NomPel;
}
string  Pelicula::getGenero()
{
	return Gen;
}
string Pelicula::getLeng()
{
	return Leng;
}

int Pelicula::getSala()
{
	return Sala;
}

int Pelicula::getTipPubli()
{
	return TipPubli;
}

string Pelicula::getDimension()
{
	return Dimen;
}

string Pelicula::toString()
{
	stringstream s;
	
	s<< "Pelicula: " << NomPel<< endl;
	s<< "Genero: " << Gen << endl;
	s<< "Lenguaje: " << Leng << endl;	
	s<< "Tipo de sala: " <<Sala<<endl;
	s<< "Tipo de publico: " << TipPubli<<endl;
	s<< "Dimension: " << Dimen <<endl;
	
	return s.str();
}


Pelicula::~Pelicula() {
	
}
