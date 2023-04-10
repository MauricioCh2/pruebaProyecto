#include "Triatlonista.h"
Triatlonista::Triatlonista(int partIron, int triaGan) {

}
Triatlonista:: ~Triatlonista() {

}
string Triatlonista::toString() {
	stringstream s;
	s << "Triatlonista: " << endl;
	s << "Cantidad de participaciones en el iron man: " << _cantPartIronMan << endl;
	s << "Cantidad de Triatones ganadas" << _cantTriatGanador << endl;
	return s.str();
}