#pragma once
#include "Decorate.h"
class Corredor : public Decorate {
private:
	char _sexo;
	double _estatura;
public:
	Corredor(Deportista*,char,double);
	virtual ~Corredor();
	virtual string toString();
};