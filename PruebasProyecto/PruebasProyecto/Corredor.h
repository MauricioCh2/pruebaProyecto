#pragma once
#include "Decorate.h"
class Corredor : public Decorate {
private:
	char _sexo;
	double _estatura;
public:
	Corredor(Deportista*);
	virtual ~Corredor();
	virtual string tostring();
};