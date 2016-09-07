#ifndef PELICULA_H
#define PELICULA_H

#include<iostream>
#include<sstream>

using namespace std;

class Pelicula {
private:
	string NomPel;
	string Gen;
	string Tip;
	string Sala;
	string TipPubli;
	string Dimen;
	
protected:
public:
	Pelicula();
	Pelicula(string nombre, string genero, string tipo, string tipoSala, string tipoPublico, string dimension);
	void setNomPel(string nom);
	void setGenero(string gen);
	void setTip(string tip);
	void setSala(string tipSal);
	void setTipPubli(string tipPub);
	void setDimension(string dimen);
	string getNomPel();
	string  getGenero();
	string getTip();
	string getSala();
	string getTipPubli();
	string getDimension();
	string toString();
	
	~Pelicula();
};

#endif
