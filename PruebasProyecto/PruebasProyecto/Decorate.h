#pragma once
#include "Deportista.h"
class Decorate: public Deportista {
protected:
	Deportista* _deportista;
public: 
	virtual string toString()=0;
    void setNombre(string);
    string getNombre();
	void setCedula(string);
	string getCedula();
	void setTelefono(string);
	string getTelefono();

	virtual Deportista* getPtrProx();
	virtual void setPtrProx(Deportista*);
};