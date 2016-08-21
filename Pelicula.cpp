#include "Pelicula.h"

Pelicula::Pelicula()
					 
{
	NomPel= " ";
	Gen=" ";
	Tip=" ";
	Sala=" ";
	TipPubli=" ";
	Dimen=" ";
}

Pelicula::Pelicula(string nombre, string genero, string tipo, string tipoSala, string tipoPublico, string dimension)
					 
{
	NomPel= nombre;
	Gen= genero;
	Tip= tipo;
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

void Pelicula::setTip(string tip)
{
	Tip=tip;
}

void Pelicula::setSala(string tipSal)
{
	Tip=tipSal;
}

void Pelicula::setTipPubli(string tipPub)
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
string Pelicula::getTip()
{
	return Tip;
}

string Pelicula::getSala()
{
	return Sala;
}

string Pelicula::getTipPubli()
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
	s<< "Tipo: " << Tip << endl;	
	s<< "Tipo de sala: " <<Sala<<endl;
	s<< "Tipo de publico: " << TipPubli<<endl;
	s<< "Dimension: " << Dimen <<endl;
	
	return s.str();
}


Pelicula::~Pelicula() {
	
}

