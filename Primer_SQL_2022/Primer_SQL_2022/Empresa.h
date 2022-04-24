#pragma once
#include<iostream>
using namespace std;
class Empresa
{
protected: string nombre, direccion;
		 int  telefono=0;

		 
protected:
	Empresa() {
	}
	Empresa(string nom, string dir, int tel) {
		nombre = nom;
		direccion = dir;
		telefono = tel;
	}


};

