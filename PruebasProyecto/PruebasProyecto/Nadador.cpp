#include "Nadador.h"
Nadador::Nadador(Deportista* dep, double imc,double masaMuscular,double peso) {
	this->_deportista = dep;
	this->_IMC = imc;
	this->_masaMuscular = masaMuscular;
	this->_peso = peso;
}
Nadador:: ~Nadador() {
	if (_deportista != NULL) { delete _deportista; }
}
string Nadador::toString() {
	stringstream s;
	if (_deportista != NULL) {
		s << this->_deportista->toString() << endl;
	}
	s << "\t\t" << this->_IMC << endl;
	s << "\t\t" << this->_masaMuscular << endl;
	s << "\t\t" << this->_peso << endl;
	return s.str();

}