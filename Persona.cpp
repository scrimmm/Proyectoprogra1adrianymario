#include "Persona.h"

Persona::Persona() 
{
	nombre=" ";
	apellido1="";
	apellido2="";
	cedula="";
	anonacimiento=0;
	estatura=0;
	peso=0;
	
}

Persona::Persona(string nom, string ape1, string ape2, string ced, int ano, float est, float pes)
{
	nombre=nom;
	apellido1=ape1;
	apellido2=ape2;
	cedula=ced;
	anonacimiento=ano;
	estatura=est;
	peso=pes;
}

void Persona::setNombre(string Nom)
{
	nombre=Nom;	
}


void Persona::setApellido1(string ape1)
{
	apellido1=ape1;
}

void Persona::setApellido2(string ape2)
{
	apellido2=ape2;
}

void Persona::setCedula(string ced)
{
	cedula=ced;
}

void Persona::setAnoNacimiento(int ano)
{
	anonacimiento=ano;
}
void Persona::setEstatura(float est)
{
	estatura=est;
}

void Persona::setPeso(float pes)
{
	peso=pes;
}

string Persona::getNombre()
{
	return nombre;
}

string Persona::getApellido1()
{
	return apellido1;
}

string Persona::getApellido2()
{
	return apellido2;
}

string Persona::getCedula()
{
	return cedula;
}

int Persona::getAnoNacimiento()
{
	return anonacimiento;
}

float Persona::getPeso()
{
	return peso;
}

float Persona::getEstatura()
{
	return estatura;
}

string Persona::toString()
{
	stringstream s;
	s<<"************************************************************************"<<endl;
	s<< "Nombre: " << nombre<<" " << apellido1 <<" " <<apellido2<< " " <<endl;
	s<< "Cedula: " << cedula<< endl;
	s<< "Peso; " << peso << endl;
	s<< "Estatura: " << estatura<< endl;
	s<< "***********************************************************************"<<endl;
	
	return s.str();
	
}






Persona::~Persona() {
	
}

