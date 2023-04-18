#pragma once
#include "Decorate.h"
class Ciclista: public Decorate {
private: 
	int _horasEntrenam;
	double _temPromedio;
public:
	Ciclista(Deportista*, int, double);
	virtual ~Ciclista();
	virtual string toString();
};