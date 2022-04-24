#include <iostream>
using namespace std;
class Empresa{
	// atributos
	protected : string nombre,direccion;
				int id, telefono;
	// costructor
	protected : 
		Empresa(){
		}
		Empresa(string nom,string dir,int tel, int id){
			nombre = nom;
			direccion = dir;
			telefono = tel;
			id = id;
		}
	
	// metodos
	void mostrar();
	
};
