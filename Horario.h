#ifndef HORARIO_H
#define HORARIO_H

#include <iostream>
#include <sstream>
using namespace std;
class Horario {
private:
	string bloque;
	float hora;
protected:
public:
	Horario();
    Horario(string , int );
	Horario(string, float);
	void setHora(float);
	void setBloque(string);
	string getBloque();
	float getHora();
	string toStrig();
			
	~Horario();
};

#endif

