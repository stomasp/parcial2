#include <iostream>
#include <mysql.h>
#include "Estudiantes.h"
using namespace std;

int main()
{
	string carnet, nombres, apellidos, direccion, email, fecha_nacimiento, genero;
	int opcion, telefono = 0, idestudiantes = {};


	do {

		
		cout << "1.ver registros" << endl;
		cout << "2.registrar nuevos alumnos" << endl;
		cout << "3.actualizar datos de alumnos" << endl;
		cout << "4.Borrar alumnos" << endl;
		cout << "5.Salir" << endl;
		cout << "Seleccione una Opcion: ";
		cin >> opcion;

		if (opcion == 1) {
			
			cout << "ver registros" << endl;
			Estudiante Obj = Estudiante();
			Obj.leer();
		}
		if (opcion == 2) {
		
			cout << "registrar nuevos alumnos" << endl;
			cout << "Ingrese No. Carnet:";
			cin >> carnet;
			cout << "Ingrese Nombres:";
			cin >> nombres;
			cout << "Ingrese Apellidos:";
			cin >> apellidos;
			cout << "Ingrese Direccion:";
			cin >> direccion;
			cout << "Ingrese Email:";
			cin >> email;
			cout << "Ingrese Telefono:";
			cin >> telefono;
			cin.ignore();
			cout << "Fecha Nacimiento:";
			cin >> fecha_nacimiento;
			cout << "Ingrese Genero:";
			cin >> genero;

			Estudiante Obj2 = Estudiante(idestudiantes, carnet, nombres, apellidos, direccion, email, telefono, fecha_nacimiento, genero);
			Obj2.crear();
		}
		if (opcion == 3) {
			

			Estudiante Obj3 = Estudiante();
			Obj3.leer();

			cout << "actualizar datos de alumnos" << endl;
			cout << "Selecciona el id a actualizar" << endl;
			cin >> idestudiantes;
			cout << "Ingrese No. Carnet:";
			cin >> carnet;
			cout << "Ingrese Nombres:";
			cin >> nombres;
			cout << "Ingrese Apellidos:";
			cin >> apellidos;
			cout << "Ingrese Direccion:";
			cin >> direccion;
			cout << "Ingrese Email:";
			cin >> email;
			cout << "Ingrese Telefono:";
			cin >> telefono;
			cin.ignore();
			cout << "Fecha Nacimiento:";
			cin >> fecha_nacimiento;
			cout << "Ingrese Genero:";
			cin >> genero;

			Estudiante Obj4 = Estudiante(idestudiantes, carnet, nombres, apellidos, direccion, email, telefono, fecha_nacimiento, genero);
			Obj4.actualizar();
		}
		if (opcion == 4) {
		

			Estudiante Obj5 = Estudiante();
			Obj5.leer();

			cout << "Borrar alumnos" << endl;
			cout << "Selecciona el id a Eliminar" << endl;
			cin >> idestudiantes;

			Estudiante Obj6 = Estudiante(idestudiantes, carnet, nombres, apellidos, direccion, email, telefono, fecha_nacimiento, genero);
			Obj6.eliminar();
		}



	} while (opcion != 5);



}

