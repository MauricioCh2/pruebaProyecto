#pragma once
#include <iostream>
#include<sstream>
using namespace std;

//RECIVIR----------------------
int recivirInt();
string recivirString();
	//puede que lo cambiemos a char*
double recivirDouble();
bool recivirBool();
//IMPRIMIR---------------------
void imprimirString(string);
void imprimirInt(int);
void imprimirChar(char);
void imprimirDouble(double);
//VALIDACIONES-----------------
	//preguuntar si cada uno de estos tiene que ir en una clase / .h y cpp separados
int validarDia();
int validarMes();
int validarAnnio();
//podriamos hacer uno para guardar e imprimir vectores pero no se si sera util asi qu de momnto no
//Otros
void enter();
void limpiarPantalla();
void limpiar();