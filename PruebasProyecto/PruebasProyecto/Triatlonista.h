#pragma once
#include "Deportista.h"
//#include "Fecha.h"
class Triatlonista : public Deportista {
private:
	int _cantPartIronMan;
	int _cantTriatGanador;
	Deportista* dec;
	//Fecha* fech;
	//La voy a poner en Triatlonista 
	//ya que el decorador simplemte representa los tres deportes, no los atributos de un cliente cualquiera del gym
	//Yyyy ya que este es un gym de Triatlonista cada uno de ellos tiene que tener como atributo la ultima fecha en la que pago 
public:
	Triatlonista(Deportista*, string, string, string, int, int);
	//el ultimo string es provicional, este deberia ser del tipo fecha 
	virtual ~Triatlonista();
	virtual string toString();

	Deportista* getDeportista();
	void setDeportista(Deportista*);

	/*Fecha* getFecha();
	void setFecha(Fecha*);*/

};