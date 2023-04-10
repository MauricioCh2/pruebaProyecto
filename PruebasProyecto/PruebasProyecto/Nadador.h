#pragma once
#include "Decorate.h"
class Nadador : public Decorate {
private:
	double _masaMuscular;
	double _peso;
	double _IMC;
private:
	Nadador(Deportista*);
	virtual ~Nadador();
	virtual string tostring();
};