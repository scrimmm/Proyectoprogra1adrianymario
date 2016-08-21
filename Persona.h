#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<sstream>


using namespace std;

class Persona {
private:
	string nombre;
	string apellido1;
	string apellido2;
	string cedula;
	int anonacimiento;
	float estatura;
	float peso;
	
protected:
public:
	Persona();
	Persona(string nom, string ape1, string ape2, string ced, int ano, float est, float pes);
	void setNombre(string Nom);
	void setApellido1(string ape1);
	void setApellido2(string ape2);
	void setCedula(string ced);
	void setAnoNacimiento(int ano);
	void setEstatura(float est);
	void setPeso(float pes);
	string getNombre();
	string getApellido1();
	string getApellido2();
	string getCedula();
	int getAnoNacimiento();
	float getPeso();
	float getEstatura();
	string toString();
	
	
	
	~Persona();
};

#endif

