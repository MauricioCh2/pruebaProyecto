#include "Ciclista.h"
Ciclista::Ciclista(Deportista* dep, int horasEntr, double tePromedio) {
	this->_deportista = dep;
	this->_horasEntrenam = horasEntr;
	this->_temPromedio = tePromedio;
}
Ciclista:: ~Ciclista() {
	if (_deportista != NULL) { delete _deportista; }
}
string Ciclista::tostring() {
	stringstream s;
	if (_deportista != NULL) {
		s << this->_deportista->toString() << endl;
	}
	s << "\t\t" << this->_horasEntrenam << endl;
	s << "\t\t" << this->_temPromedio << endl;
	return s.str();

}