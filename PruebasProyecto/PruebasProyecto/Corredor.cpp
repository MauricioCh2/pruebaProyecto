#include "Corredor.h"
Corredor::Corredor(Deportista* dep, char sex, double estatura) {
	this->_deportista = dep;
	this-> _sexo = sex;
	this->_estatura = estatura;
}
Corredor:: ~Corredor() {
	if (_deportista != NULL) { delete _deportista; }
}
string Corredor::tostring() {
	stringstream s;
	if (_deportista != NULL) {
		s << this->_deportista->toString() << endl;
	}
	s << "\t\t" << this->_sexo << endl;
	s << "\t\t" << this->_estatura << endl;
	return s.str();

}