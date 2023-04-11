#pragma once
#include "Deportista.h"
class Decorate: public Deportista {
protected:
	Deportista* _deportista;
public: 
	virtual string toString() = 0;
	virtual void Prueba() {
		cout << "a";
	}

};