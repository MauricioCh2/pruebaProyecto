#pragma once
#include "Deportista.h"
class Triatlonista : public Deportista {
private:
	int _cantPartIronMan;
	int _cantTriatGanador;
public:
	Triatlonista(string, string, string, string, int, int);
	//el ultimo string es provicional, este deberia ser del tipo fecha 
	virtual ~Triatlonista();
	virtual string toString();
};