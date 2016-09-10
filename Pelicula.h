#ifndef PELICULA_H
#define PELICULA_H

#include<iostream>
#include<sstream>

using namespace std;

class Pelicula {
private:
	string NomPel;
	string Gen;
	string Leng;
	int Sala;
	int TipPubli;
	string Dimen;
	
protected:
public:
	Pelicula();
	Pelicula(string nombre, string genero, string len, int tipoSala, int tipoPublico, string dimension);
	void setNomPel(string nom);
	void setGenero(string gen);
	void setLeng(string leng);
	void setSala(int tipSal);
	void setTipPubli(int tipPub);
	void setDimension(string dimen);
	string getNomPel();
	string getGenero();
	string getLeng();
	int getSala();
	int getTipPubli();
	string getDimension();
	string toString();
	
	~Pelicula();
};

#endif
