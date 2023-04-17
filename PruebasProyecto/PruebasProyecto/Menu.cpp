#include "Menu.h"
void Menu::inicio() {
	
	bool fin = false;
	imprimirString("Bienvenido al GYM de triatlon");

	imprimirString("Digite la Fecha en formato dia/mes/annio");
	fecha = validarFecha();
	//cout<<fecha->toString()<< "prueba ";
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
	case 1://clientes
		imprimirString(menuCliente());
		opE = recivirInt();
		opMenuCliente(opE);
		break;
	case 2://Registro y control (verificación y reporte) de pagos
		throw new string("opcion aun en desarrollo");
		break;
	case 3://Reportes generales
		throw new string("opcion aun en desarrollo");

		break;
	case 4://Registro y actualizacion de cursos
		imprimirString(menuCursos());
		op = recivirInt();
		opMenuCursos(op);

		break;
	case 5:// manejo de reservaciones 
		throw new string("opcion aun en desarrollo");

		break;
	case 6: //Salir
		limpiarPantalla();
		imprimirString("Buen dia...");
		return true;
		//Completar Archivos al 100%
		//Y despues "delete()" cuando ya leyo y gurado TODO
		break;
	default: 
		break;
	}
	return false;

}
string Menu::menuPrincipal() {
	stringstream s;
	s << "QUE DESEA HACER?" << endl
		<< "[1]Registrar o editar clientes-----------------" << endl
		<< "[2]Registro y control de pagos--------" << endl
		<< "[3]Reportes generales-----------------" << endl
		<< "[4]Registro y actualizacion de cursos-" << endl
		<< "[5]Manejo de reservaciones------------" << endl
		<< "[5]Salir------------------------------" << endl;

	return s.str();
}
//clientes-----------------------------------------------------------------
string Menu::menuCliente() {
	stringstream s;
	s << "MENU CLIENTES" << endl
		<< "[1]Registrar Clientes-----------------" << endl
		<< "[2]Edicion e clientes--------" << endl
		<< "[3]Eliminar clientess-----------------" << endl
		<< "[4]Cancelar---------------------------" << endl;


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
	//Ciclista
	int horasEntrenem = 0;
	double temProm = 0;
	//triatlonista
	int cantPartiEnIronMan = 0;
	int canTriaGanados = 0;
	//clientes (esto puede variar)
	Deportista* cliente = NULL;

	//esto debe incluir la fecha de registro de los datos
	// no se si en general del cliente o solo del triatonista
	switch (opC) {
	case 1:
		imprimirString("Ingreso de datos del cliente: ");
		imprimirString("Cedula: ");
		cedula = recivirString();
		imprimirString("Nombre: ");
		nombre = recivirString();
		imprimirString("Telefono: ");
		telefono = recivirString();
		imprimirString("Fecha nacimiento: ");
		fechaNa = recivirString();
		//esto podrian ser vectores
		imprimirString("Sexo: ");
		sexo = recivirString();
		imprimirString("Estatura: ");
		estatura = recivirDouble();
		imprimirString("Peso: ");
		peso = recivirDouble();
		imprimirString("Porcentaje de grasa corporal: ");
		PGC = recivirDouble();
		imprimirString("Porcentaje masa corporal: ");
		PMC = recivirDouble();
		imprimirString("Horas de entrenamiento: ");
		PGC = recivirDouble();
		imprimirString("Porcentaje masa corporal: ");
		PMC = recivirDouble();
		imprimirString("Cantidad de horas de entrenamiento:");
		canTriaGanados = recivirDouble();
		imprimirString("Cantidad de triatlones ganados:");
		horasEntrenem = recivirDouble();
		imprimirString("no se que es temPromedio, pero eso: ");
		temProm = recivirDouble();
		imprimirString("Cantidad de triatlones ganados");
		canTriaGanados = recivirDouble();

		//Hacer Decorados, despues Agregar en Trialonita
		//(Nota: (Deportista(ABS)==UpCasting)

		//OJO que se nececita hacer el decorate 
		cliente = new Triatlonista(NULL,cedula,nombre,telefono,cantPartiEnIronMan,canTriaGanados);
		//cliente = new Ciclista(cliente,horasEntrenem, temProm);
		//luegoesto se debe ir a la lista obviamente
		//gym->ingresarListaClientes(cliente);
		enter();
		limpiarPantalla();
		break;
	case 2:

		break;
	case 3:

		break;
	case 4: 
		limpiarPantalla();
		return true;
		break;
	default:
		return false;
		break;
	}
	

	imprimirString("Datos ingresados correctamente ");
	return false;
}
//Pagos-----------------------------------------------------------------
string Menu::menuPagos() {
	return "";
}
bool Menu::opMenuPAgos(int) {
	return false;
}

//Reporte generales------------------------------------------------------
string Menu::menuReportesGenerales() {

	return "";
}
bool Menu::opMenuReportes(int) {
	return false;
}
//Registro y actualizacion de cursos-------------------------------------
string Menu::menuCursos() {
	stringstream s;
	s << "MENU CURSOS" << endl
		<< "[1]Nuevo curso------------------------" << endl
		<< "[2]Edicion de cursos------------------" << endl
		<< "[3]Eliminar curso---------------------" << endl
		<< "[4]Cancelar---------------------------" << endl;
	return s.str();
}
bool Menu::opMenuCursos(int op ) {
	string nombre;
	string descripcion;
	string fecha;
	string horario;
	int cupMax;
	//Deportista* cliente;
	//Curso* curso;
	switch (op) {
	case 1: //nuevo curso
		imprimirString("Ingreso de datos del curso: ");
		imprimirString("nombre: ");
		nombre = recivirString();
		imprimirString("Descripcon del curso: ");
		descripcion = recivirString();
		imprimirString("Fecha: ");
		fecha = recivirString();
		imprimirString("Horario: ");
		horario = recivirString();
		imprimirString("Peso: ");
		cupMax = recivirInt();
		//curso*= new Curso(nombre, descripcion, fecha, horario, cupMax, NULL);
		// ese null seria la liusta de clientes pero creo que iria a null ya que aun no se le asgnaria nada 
		//luegoesto se debe ir a la lista obviamente
		// gym->ingresarListaCursos(curso);
		enter();
		limpiarPantalla();
		break;
	case 2:// edicion de cursos

		break;
	case 3://eliminar curso 

		break;
	case 4://cancelar
		limpiarPantalla();
		return true;
		break;
	defaul: 

		break;

	}
	return false;
}
//Reservaciones----------------------------------------------------------
string Menu::menuReservaciones() {
	return "";

}
bool Menu::opMenuReservaciones(int) {
	return false;

}