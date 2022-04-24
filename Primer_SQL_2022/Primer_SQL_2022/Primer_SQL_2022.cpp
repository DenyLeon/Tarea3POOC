// #include <mysql.h>
#include <iostream>
#include "Proveedor.h"

using namespace std;
int main(){
    string nit, nombre, direccion;
    int telefono;

    /*cout << "ingrese Id: ";
    cin >> idd;
    cin.ignore();*/
    cout << "ingrese Nombre: ";
    getline(cin, nombre);
    cout << "ingrese Nit: ";
    getline(cin, nit);
    cout << "ingrese Direccion: ";
    getline(cin, direccion);
    cout << "ingrese Telefono: ";
    cin >> telefono;
    cin.ignore();
    

    /*string nit, nombre, direccion;
    int telefono, id;
    cout << "Ingrese nit:";
    getline(cin, nit);
    cout << "Ingrese Nombres:";
    getline(cin, nombre);
    cout << "Ingrese Direccion:";
    getline(cin, direccion);
    cout << "Ingrese Telefono:";
    cin >> telefono;
    cin.ignore();

    Cliente c = Proveedor(nombre,direccion, telefono, nit, id);
    c.crear();*/

    //cout << "Hello World!\n";   
    //MYSQL* conectar;
    //conectar = mysql_init(0);
    //conectar = mysql_real_connect(conectar, "localhost", "root", "Umg$2019", "db_empresa", 3306, NULL, 0);
       // if (conectar) {
            //cout << "conexion exitosa ..." << endl;
            //int q_estado;
            //Insert
            /*cout << "Ingrese puesto:";
            string puesto;
            cin >> puesto;
            string insert = "insert into puestos (puesto) values ('" + puesto + "');";
            const char* i = insert.c_str();
            q_estado = mysql_query(conectar, i);
            if (!q_estado) {
                cout << "Ingreso exitoso" << endl;
            }
            else {
                cout << "Fallo ingreso" << endl;
            }*/
            //Select
            //MYSQL_ROW fila;
            //MYSQL_RES* resultado;
            /*string consulta = "select * from puestos;";
            const char* c = consulta.c_str();
            q_estado = mysql_query(conectar, c);
            if (!q_estado) {
                resultado = mysql_store_result(conectar);
                while (fila= mysql_fetch_row(resultado))
                {
                    cout << fila[0] << "," << fila[1] << endl;
                }
            }
            else {
                cout << "Fallo consulta" << endl;
            }*/
        //}
       // else {
           // cout << "Error al conectar" << endl;
       // }
    Proveedor c = Proveedor(nombre, nit,direccion,telefono);
    c.crear();
    c.leer(); 

    system("pause");

    return 0;
}
