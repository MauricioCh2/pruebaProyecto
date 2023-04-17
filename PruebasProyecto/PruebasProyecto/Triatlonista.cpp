#include "Triatlonista.h"
Triatlonista::Triatlonista(Deportista* ptrdec, string ced, string nom, string tel, int partIron, int triaGan) {
	this->_cantPartIronMan = partIron;
	this->_cantTriatGanador = triaGan;
	getDeportista()->setNombre(nom);
	getDeportista()->setCedula(nom);
	getDeportista()->setTelefono(tel);
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
	return dec;
}

void Triatlonista::setDeportista(Deportista* d)
{
	dec = d;
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
