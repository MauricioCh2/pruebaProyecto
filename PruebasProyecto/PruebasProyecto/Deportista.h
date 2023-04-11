#pragma once
#include <iostream>
#include <sstream>
using namespace std;
//es la clase base
class Deportista {
protected: 
	string ptrCedula;
	string ptrNombre;
	string ptrTelefono;
	//Fecha* FeNa;
	string ptrFecha;
public: 
	virtual string toString()=0;

};