#include "Interfaz.h"
#include "Pelicula.h"
#include "ColeccionPeliculas.h"



Interfaz::Interfaz()
				   
{
	
}

int Interfaz::getAdulto()
{
	return adulto;
}
int Interfaz::getNino()
{
	return nino;
}
int Interfaz::getTotalasiento()
{
	return totalasientos;
}



void Interfaz::seleccionaSala()
{
	
}

void Interfaz::SeleccionAsientos(SalaCine &sala)
{
	for (int i=0; i<totalasientos;i++)
	{
		char letra;
		int numero;
		
		sala.impremesalaCompleta(sala);
		
		cout<<"Los espacios disponibles estan en color verde "<< endl;
		cout<< "Los espacios ocupados estan en color Rojo "<<endl;
		cout<< "seleccionando el asiento " << i+1 << "de "<< totalasientos << endl;
		cout<< "Digite la letra (A-F): "<<endl;
		cin>>letra;
		letra=toupper(letra);
		cout<< "Digite el numero (1-10): "<<endl;
		cin>>numero;
		numero=numero-1;
		  //si sala pos es cero ejecutar,  sino indica que esta reservado
		
		sala.seleccionAsiento(letra,numero);
		
		system("cls");
		
		
	}	
	
}

void Interfaz::asientoNinoAdulto()
{
	char opcion=' ';
	bool salir=0;
	
	
	while ( !salir )
	{
		cout<<" Digite el tipo de tiquetes a comprar: " <<endl<<endl;
		cout<<" A (SOLO ADULTOS)"<<endl;
		cout<<" N (SOLO NINOS)"<<endl;
		cout<<" C (ADULTOS Y NINOS)"<<endl;
		cout<<" S (SALIR)"<<endl;
		cin>>opcion;
		opcion=toupper(opcion);
		
		switch (opcion)
		{
				
		case 'A':		
			
			cout<<"Digite la cantidad de tiquetes a comprar: ";
			cin>>adulto;
			cout << "Inserte un numero"<<endl;
			totalasientos=adulto;
			system("cls");
			salir=1;break;
			
			
			
		case 'C': 	
			cout<<"Digite la cantidad de tiquetes para adulto a comprar: ";
			cin>>adulto;
			
			cout<<"Digite la cantidad de tiquetes para niño a comprar: ";
			cin>>nino;
			
			totalasientos=adulto+nino;
			system("cls"); 
			salir=1;break;
			
		case 'N':
			cout<<"Digite la cantidad de tiquetes a comprar: ";
			cin>>nino;
			totalasientos=nino;
			system("cls");
			salir=1;break;
			
		case 'S':
			
			salir=1;system("cls");break;
			
			default : 
			system("cls");
			cout<<"opcion invalida"<<endl;;
			
			
		} 
		
		
	
		
		
		
	}
	
}


void Interfaz::confirmaAsientos(SalaCine &sala)
{
	char opcion = ' '; 
	sala.impremesalaCompleta(sala);
	cout<<"Esta seguro que desea los asientos seleccionados (S/N)"<<endl;
	cin>>opcion;
	system("cls");
	opcion=toupper(opcion);
	sala.confirmaseleccion(opcion);
	sala.impremesalaCompleta(sala);	
	sala.aplicarComprados();
	sala.impremesalaCompleta(sala);

}

void Interfaz::seleccionPelicula(ColeccionPeliculas cole)
{
	int num;
	cout<< "Cual pelicula desea reservar"<<endl;
	cin>> num;
	cout<< cole.obtienePelicula(num);
	
	//algo sinilar para cuando defina Carteleraen lugar de pelicula
	//falta retornar la posicion num para pasarla y utilizarla como dimension K en sala i j k
	
}



void Interfaz::compraTicket(SalaCine sala,ColeccionPeliculas cole1)
							
{
	
	
	cout<< cole1.toString();
	
	
	
	seleccionPelicula(cole1);
	sala.setAsiento(1,1,3);
	asientoNinoAdulto();
	SeleccionAsientos(sala);
	confirmaAsientos(sala);
	
	
	
	

}


void Interfaz::Menuprincipal()
{
	cout<< "Cine los 3 patitos"<<endl;
	cout<<"Digite:"<< endl;
	cout<<"1 para compra de ticketes "<< endl;
	cout<<"2 para consultar nuestra cartelera";
	
	
}


Interfaz::~Interfaz() {
	
}

