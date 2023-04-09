#include "Menu.h"
void Menu::inicio() {
	int dia = 0;
	int mes = 0;
	int annio = 0;
	bool fin = false;
	imprimirString("Bienvenido al GYM de triatlon");

	imprimirString("Digite la Fecha en formato dia/mes/annio");
	dia = recivirInt();
	mes = recivirInt();
	annio = recivirInt();
	//esto se podria hacer esteticamente mas bonito pero habria qua gregar una validaciones 
	//no hace falta, pero seria para que el usuario escriba 01/03/2021, se recoora el string, se separe en 
	//varios auxiliares y se guarde en cada variable (o al menos a mi se me ocurre asi)
	_fecha[0] = dia;
	_fecha[1] = mes;
	_fecha[2] = annio;
	while (!fin) {
		llamarMenus();
	}


}
bool Menu::llamarMenus() {
	int op = 0;
	int opE = 0;

	imprimirString(menuPrincipal());
	op=recivirInt();
	switch (op) {
	case 1:
		imprimirString(menuCliente());
		opE = recivirInt();
		opMenuCliente(opE);
		break;
	case 2:
		throw new string("opcion aun en desarrollo");
		break;
	case 3:
		throw new string("opcion aun en desarrollo");

		break;
	case 4:
		throw new string("opcion aun en desarrollo");

		break;
	case 5:
		throw new string("opcion aun en desarrollo");

		break;

	}

}
string Menu::menuPrincipal() {
	stringstream s;
	s << "QUE DESEA HACER?" << endl
		<< "[1]Registrar o editar clientes-----------------" << endl
		<< "[2]Registro y control de pagos--------" << endl
		<< "[3]Reportes generales-----------------" << endl
		<< "[4]Registro y actualizacion de cursos-" << endl
		<< "[5]Manejo de reservaciones------------" << endl;

	return s.str();
}
//clientes---------------------
string Menu::menuCliente() {
	stringstream s;
	s << "MENU CLIENTES?" << endl
		<< "[1]Registrar Clientes-----------------" << endl
		<< "[2]Edicion e clientes--------" << endl
		<< "[3]Eliminar clientess-----------------" << endl;

	return s.str();
}
bool Menu::opMenuCliente(int opC) {
	string cedula = "";
	string nombre = "";
	string telefono = "";
	string fechaNa;
	string sexo;
	//Datos biometricos
	double estatura = 0.0;
	double peso = 0.0;
	double PGC = 0.0;
	double PMC = 0.0;
	//esto debe incluir la fecha de registro de los datos
	// no se si en general del cliente o solo del triatonista
	switch (opC) {
	case 1:
		imprimirString("Ingreso de datos del cliente: ");
		imprimirString("Cedula: ");
		cedula = recivirString();
		imprimirString("Telefono: ");
		nombre = recivirString();
		imprimirString("fechaNa: ");
		fechaNa = recivirString();
		//esto podrian ser vectores
		imprimirString("Sexo: ");
		sexo = recivirString();
		imprimirString("Estatura: ");
		estatura = recivirDouble();
		imprimirString("Peso: ");
		peso = recivirDouble();
		imprimirString("Porcentaje de grasa corporal: ");
		PMC = recivirDouble();
		imprimirString("Porcentaje masa corporal: ");
		PMC = recivirDouble();
		//luegoesto se debe ir a la lista obviamente
		enter();
		limpiarPantalla();
		return true;
		break;
	case 2:

		break;
	case 3:

		break;
	default:
		return false;
		break;
	}
	

	imprimirString("Datos ingresados correctamente ");
	return true;
}
//Pagos------------------------
string Menu::menuPagos() {
	return "";
}
bool Menu::opMenuPAgos(int) {
	return false;
}

//Reporte gnerales-------------
string Menu::menuReportesGenerales() {

	return "";
}
bool Menu::opMenuReportes(int) {
	return false;
}

//Reservaciones----------------
string Menu::menuReservaciones() {
	return "";

}
bool Menu::opMenuReservaciones(int) {
	return false;

}