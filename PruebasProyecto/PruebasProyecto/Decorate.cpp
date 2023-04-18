#pragma once
#include "Decorate.h"

void Decorate::setNombre(string n) {
	this->Nombre = n;
}
string Decorate::getNombre() {
	return Nombre;
}
void Decorate::setCedula(string c)
{
	this->Cedula = c;
}
string Decorate::getCedula()
{
	return Cedula;
}
void Decorate::setTelefono(string t)
{
	this->Telefono = t;
}
string Decorate::getTelefono()
{
	return Telefono;
}
Deportista* Decorate::getPtrProx() {
	return _deportista;
}
void Decorate::setPtrProx(Deportista* dep) {
	this->_deportista = dep;
}