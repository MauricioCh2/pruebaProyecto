#pragma once
#include <iostream>
#include <sstream>
using namespace std;
//es la clase base
class Deportista {
private: 
	string _cedula;
	string _nombre;
	string _telefono;
	//fecha de nacimiento
public: 
	virtual string toString()=0;

};