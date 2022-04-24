#include "Empresa.cpp"
#include <iostream>
using namespace std;
class Proveedor : Empresa{
	private: string nit;
	
	public :
	Proveedor (){
	}
	Proveedor(string nom, string n, string dir, int tel, int id) : Empresa (nom,dir,tel,id){
		nit = n;
	}
	
	
	void setNit(string n){nit = n;}
  	void setNombres(string nom){nombre = nom;}
 	void setDireccion(string dir){direccion = dir;}
  	void setTelefono(int tel){telefono = tel;}
  	void setid(int id){id = id;}
  	
  	string getNit(){	return nit;}
  	string getNombre(){	return nombre;}
  	string getDireccion(){	return direccion;}
  	int getTelefono(){	return telefono;}
  	int getid(){	return id;}
  	
  	void mostrar(){
  		cout<<"______________________"<<endl;
		cout<<nit<<","<<id<<","<<nombre<<","<<direccion<<","<<telefono<<endl;
	  }
};
