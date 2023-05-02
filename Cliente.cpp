# include "Persona.cpp"						// Inyeccion Clase Persona
# include<iostream>

using namespace std;

class Cliente : Persona{					// Herencia en C++
	// Atributos
	private :  string nit;
	
	// Constructor
	public : 
	Cliente(){
	}
	
	Cliente(string nom, string ape, string dir, int tel, string n) : Persona(nom, ape, dir, tel){
		nit = n;
	}
	
	// Metodos
	
	// Set (modificar)
	void setNit(string n){
		nit = n;
	}
	void setNombres(string nom){
		nombres = nom;
	}
	void setApellidos(string ape){
		apellidos = ape;
	}
	void setDireccion(string dir){
		direccion = dir;
	}
	void setTelfono(int tel){
		telefono = tel;
	}
	
	// Get (mostrar)
	string getNit(){
		return nit;
	}
	string getNombres(){
		return nombres;
	}
	string getApellidos(){
		return apellidos;
	}
	string getDireccion(){
		return direccion;
	}
	int getTelefono(){
		return telefono;
	}
		
	void mostrar(){
		cout<<"______________________"<<endl;
		cout<<nit<<", "<<nombres<<", "<<apellidos<<", "<<direccion<<", "<<", "<<telefono<<endl;
	}
	
};

