#include "Triatlonista.h"
Triatlonista::Triatlonista(Deportista* ptrdec, string ced, string nom, string tel, int partIron, int triaGan) {
	this->_cantPartIronMan = partIron;
	this->_cantTriatGanador = triaGan;
	dec->setNombre(nom);
	dec->setCedula(nom);
	dec->setTelefono(tel);
	//this->fech = f;
	this->dec = ptrdec;
}
Triatlonista:: ~Triatlonista() {

}
string Triatlonista::toString() {
	stringstream s;
	s << "Triatlonista: " << endl;
	s << "Nombre: " <<Nombre<<endl;
	s << "Cedula: " <<Cedula<<endl;
	s << "Telefono: " <<Telefono<<endl;
	if (dec != NULL) {
		s << dec->toString() << endl;
	}
	s << "Cantidad de participaciones en el iron man: " << _cantPartIronMan << endl;
	s << "Cantidad de Triatones ganadas" << _cantTriatGanador << endl;
	return s.str();
}

Deportista* Triatlonista::getDeportista()
{
	throw new string("ruta erronea pa");
	return NULL;
}

void Triatlonista::setDeportista(Deportista* d)
{
	throw new string("ruta erronea pa");
}

//Fecha* Triatlonista::getFecha()
//{
//	return fech;
//}
//
//void Triatlonista::setFecha(Fecha* f)
//{
//	fech = f;
//}
