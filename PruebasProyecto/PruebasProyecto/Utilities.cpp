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
int validarDia() {
	int d;
	while (true) {
		 d = recivirInt();
		if (d >= 1 && d <= 31) {
			return d;
		}
		else {
			throw new string ("ERROR: Digite un dia valido\n");
		}
	}
	return 0;

}
int validarMes() {
	int m;
	while (true) {
		m = recivirInt();
		if (m >= 1 && m <= 12) {
			return m;
		}
		else {
			throw new string("ERROR: Digite un mes valido\n");
		}
	}
	return 0;
}
int validarAnnio() {
	int a;
	while (true) {
		a = recivirInt();
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