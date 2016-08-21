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
	string Psipnosis;
	
	
protected:
public:
	Pelicula();
	Pelicula(string , string , string , string , string, string,string );
	void setNomPel(string nom);
	void setGenero(string gen);
	void setTip(string tip);
	void setSala(string tipSal);
	void setTipPubli(string tipPub);
	void setDimension(string dimen);
	void setPsipnosis(string);
	string getNomPel();
	string  getGenero();
	string getTip();
	string getSala();
	string getTipPubli();
	string getDimension();
	string toString();
	string getPsipnosis();
	
	~Pelicula();
};

#endif

