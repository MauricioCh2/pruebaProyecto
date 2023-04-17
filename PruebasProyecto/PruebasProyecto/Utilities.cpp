#include "Utilities.h"
//RECIVIR----------------------
int recivirInt() {
	int i;
	while (true) {

		if (cin >> i) {
			return i;
		}
		else {
			throw new string("ERROR: Digite un valor entero valido");
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}
	return 0;
	
}
string recivirString() {
	string s;
	cin >> s;
	return s;
}
//puede que lo cambiemos a char*
double recivirDouble() {
	double d;
	while (true) {

		if (cin >> d) {
			return d;
		}
		else {
			throw new string("ERROR: Digite un valor entero valido");
			cin.clear();
			cin.ignore(1024, '\n');
		}
	}
	return 0;
}
//IMPRIMIR---------------------
void imprimirString(string s) {
	cout << s << endl;
}
void imprimirInt(int i) {
	cout << i << endl;
}
void imprimirChar(char c) {
	cout << c << endl;
}
void imprimirDouble(double d) {
	cout << d << endl;
}
//VALIDACIONES-----------------
Fecha* validarFecha() {

	string leer = recivirString();
	stringstream input_stringstream(leer);
	string dia = "";
	string mes = "";
	string annio = "";
	int d, m, a;
	getline(input_stringstream, dia, '/');
	getline(input_stringstream, mes, '/');
	getline(input_stringstream, annio, '/');
	d = validarDia(dia);
	m = validarMes(mes);
	a = validarAnnio(annio);
	Fecha* fech = new Fecha(d,m,a);
	return fech;


}

int validarDia(string s) {
	int d;
	while (true) {
		 d = stoi(s);
		if (d >= 1 && d <= 31) {
			return d;
		}
		else {
			throw new string ("ERROR: Digite un dia valido\n");
		}
	}
	return 0;

}
int validarMes(string s) {
	int m;
	while (true) {
		m = stoi(s);
		if (m >= 1 && m <= 12) {
			return m;
		}
		else {
			throw new string("ERROR: Digite un mes valido\n");
		}
	}
	return 0;
}
int validarAnnio(string s) {
	int a;
	while (true) {
		a = stoi(s);
		if (a >= 1 && a <= 31) {
			return a;
		}
		else {
			throw new string("ERROR: Digite un annio valido\n");
		}
	}
	return 0;
}
//Otros-------------------------------
void enter() {
	system("pause");
}
void limpiarPantalla() {
	system ("cls");
}
void limpiar(){
	cin.clear();
	cin.ignore(1024, '\n');
}