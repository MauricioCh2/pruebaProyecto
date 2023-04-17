#pragma once
#include "Decorate.h"

string Decorate::toString()
{
	return "";
}

void Decorate::setNombre(string n) {
	Nombre = n;
}
string Decorate::getNombre() {
	return Nombre;
}
void Decorate::setCedula(string c)
{
	Cedula = c;
}
string Decorate::getCedula()
{
	return Cedula;
}
void Decorate::setTelefono(string t)
{
	Telefono = t;
}
string Decorate::getTelefono()
{
	return Telefono;
}
Deportista* Decorate::getPtrProx() {
	return _deportista;
}
void Decorate::setPtrProx(Deportista* dep) {
	_deportista = dep;
}