# include "Cliente.cpp"
# include<iostream>

using namespace std;

main(){

	string nit, nombres, apellidos, direccion;
	int telefono;

	cout<<"Ingresar NIT: ";
	cin>>nit;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono; 
	
	// Instancia de un Objeto
	Cliente cliente = Cliente(nombres, apellidos, direccion, telefono, nit);
	// Llamar al metodo mostrar()
	cliente.mostrar();
	
	cout<<"Ingresar NIT: ";
	cin>>nit;
	cliente.setNit(nit);
	cout<<cliente.getNit();
	
	/*Cliente cliente = Cliente();
	cliente.setNit(nit);
	cliente.setNombres(nombres);
	cliente.setApellidos(apellidos);
	cliente.setDireccion(direccion);
	cliente.setTelfono(telefono);
	cliente.mostrar();*/
}
