/*
Recordemos usar la misma convencion a la hora de escribir el nombe de las cosas
Archivos:
Nombre_Archivo
Clase:
MiCLase
Atributos:
mi_atributo
(Nota: no es necesario pero los profes usan _ al inicio de 
un atributo privado sin embargo esto no es universal )
Metodos: 
misMetodos();
constantes: 
MI_COSNTANTE
(Esto si no estoy mal aplica para define y eso)

Fuentes, tiktok.... digo, chatGPT
(Convenciones
CamelCase es cuando se escribe  la primera palabra en minuscula pero el resto pegadas y con la primera letra
en mayus (exceptuando las clases
Snake_case es cuando las palabras se separan por "_")

)
Nada de esto es necesario pero para llevar un orden y que se vea coquete no estamal 
*/
#pragma once
#include <iostream>
#include <sstream>

#include "Utilities.h"
#include "Gym.h"
#include "Fecha.h"
//#include "Archivos.h"
using namespace std;

class Menu {
private:
	int _fecha[3];
	Gym* _gym;
public:
	//Inicio------------------------------------------------------------
	void inicio();
	bool llamarMenus();
	string menuPrincipal();
	//clientes----------------------------------------------------------
	string menuCliente();
	bool opMenuCliente(int);
	//Pagos-------------------------------------------------------------
	string menuPagos();
	bool opMenuPAgos(int);
	//Cursos------------------------------------------------------------
	string menuCursos();
	bool opMenuCursos(int);
	//Reporte generales-------------------------------------------------
	string menuReportesGenerales();
	bool opMenuReportes(int);
	//Reservaciones-----------------------------------------------------
	string menuReservaciones();
	bool opMenuReservaciones(int);


	
};