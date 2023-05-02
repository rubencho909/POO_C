
#include<iostream>

using namespace std;

class Persona{
	// Atributos
	protected : string nombres, apellidos, direccion;
				int telefono;
	
	// Constructor
	protected : 
			Persona(){
			}
			Persona(string nom, string ape, string dir, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
			}
		
	// Metodos
	void mostrar();
	
};
