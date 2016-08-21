#include "Persona.h"

Persona::Persona(string N, string A1, string A2, int E) 
{
	Nombre = N;
	Apellido1 = A1;
	Apellido2 = A2;
	Edad = E;
}

Persona::~Persona() 
{
	
}

void Persona::setNombre(string N)
{
	Nombre = N;
}

void Persona::setApellido1(string A)
{
	Apellido1 = A;
}

void Persona::setApellido2(string A)
{
	Apellido2 = A;
}

void Persona::setEdad(int E)
{
	Edad = E;
}

string Persona::getNombre()
{
	return Nombre;
}

string Persona::getApellido1()
{
	return Apellido1;
}

string Persona::getApellido2()
{
	return Apellido2;
}

int Persona::getEdad()
{
	return Edad;
}

string Persona::EsMay()
{
	int x;
	while (Edad < 0)
	{
		cout << "Error de edad, digite una nueva" << endl;
		cin >> x;
		setEdad(x);
	}
	
	if ((Edad >= 0) && (Edad < 18))
	{
		return "Menor";
	}
		
	else 
		return "Mayor";
	
}

string Persona::toString()
{
	stringstream s;
	
	s << "El nombre del cliente es: " << Nombre << " " << Apellido1 << " " << Apellido2 << endl;
	
	return s.str();
}
