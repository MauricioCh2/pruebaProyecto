#pragma once
#include "Deportista.h"
class Decorate: public Deportista {
protected:
	Deportista* _deportista;
public: 
	string toString();
    void setNombre(string);
    string getNombre();
	void setCedula(string);
	string getCedula();
	void setTelefono(string);
	string getTelefono();

    Deportista* getPtrProx();
    void setPtrProx(Deportista*);

};