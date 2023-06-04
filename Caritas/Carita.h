#pragma once
#include "Linea.h"
#include "Rectangulo.h"
#include "Rombo.h"
#include "Circulo.h"

class Carita
{
private:
	Rectangulo* rectangulo;
	Linea* linea;
	Rombo* rombo;
	Circulo* circulo;
public:
	Carita()
	{
		rectangulo = new Rectangulo;
		linea = new Linea;
		rombo = new Rombo;
		circulo = new Circulo;
	}
	~Carita()
	{
		delete rectangulo;
		delete linea;
		delete rombo;
		delete circulo;
	}
	void mostrar(Graphics^ g)
	{
		//g->Clear(Color::White);
		rectangulo->mostrar(g);
		circulo->mostrar(g);
		rombo->mostrar(g);
		linea->mostrar(g);
	}
};



