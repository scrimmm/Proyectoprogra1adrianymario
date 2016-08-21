#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Persona {
private:
	string Nombre;
	string Apellido1;
	string Apellido2;
	int Edad;
protected:
public:
	Persona(string N, string A1, string A2, int E);
	~Persona();
	void setNombre(string N);
	void setApellido1(string A);
	void setApellido2(string A);
	void setEdad(int E);
	string getNombre();
	string getApellido1();
	string getApellido2();
	int getEdad();
	string EsMay();
	string toString();
	
};

#endif

