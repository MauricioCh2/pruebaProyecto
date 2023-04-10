#pragma once
#include "Deportista.h"
class Triatlonista : public Deportista {
private:
	int _cantPartIronMan;
	int _cantTriatGanador;
public:
	Triatlonista(int, int);
	virtual ~Triatlonista();
	virtual string toString();
};