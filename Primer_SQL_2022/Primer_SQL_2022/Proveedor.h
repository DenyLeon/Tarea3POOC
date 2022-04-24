#pragma once
#include "Empresa.h"
#include <mysql.h>
#include "ConexionBD.h"
#include <iostream>
#include <string>
using namespace std;
class Proveedor : Empresa {
private: string nit;

public:
	Proveedor() {
	}
	Proveedor(string nom, string n, string dir, int tel) : Empresa(nom, dir, tel) {
		nit = n;
	}


	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombre = nom; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }


	string getNit() { return nit; }
	string getNombre() { return nombre; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }
	
	void crear() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(telefono);
			string insert = "INSERT INTO proveedor (nombre, nit,direccion, telefono)VALUES('" + nombre + "','" + nit + "','" + direccion + "'," + t + "); ";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso exitoso" << endl;
			}
			else {
				cout << "Fallo ingreso" << endl;
			}
		}
		else {
			cout << "Error en conectar" << endl;
		}
		cn.cerrar_conexion();
		
	};

	void leer() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultado;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from Proveedor;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultado = mysql_store_result(cn.getConectar());
				while (fila = mysql_fetch_row(resultado))
				{
					cout << fila[0] << "," << fila[1] << "," << fila[2] << "," << fila[3] << "," << fila[4] << endl;
				}
			}
			else {
				cout << "Fallo informacion" << endl;
			}
		}
		else{
			cout << "error" << endl;
		}
		cn.cerrar_conexion();
		}
	};