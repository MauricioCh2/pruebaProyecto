#pragma once
#include <iostream>
#include <sstream>
using namespace std;
//es la clase base
class Deportista {
protected: 
	string Cedula;//Cuite los ptr,s porque no son punteros lo que van a almacenar
	string Nombre;
	string Telefono;
public: 
	virtual string toString()=0;
    virtual ~Deportista() {}
    virtual void setNombre(string) = 0;
    virtual string getNombre() = 0;
	virtual void setCedula(string) = 0;
	virtual string getCedula() = 0;
	virtual void setTelefono(string) = 0;
	virtual string getTelefono() = 0;

    virtual Deportista* getPtrProx() = 0;
    virtual void setPtrProx(Deportista*) = 0;
};