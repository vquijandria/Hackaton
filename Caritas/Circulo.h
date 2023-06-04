#pragma once
#include "Figura.h"

class Circulo : public Figura
{
public:
	Circulo() : Figura()
	{
		x = 100;
		y = 120;
	}
	void mostrar(Graphics^ g)
	{
		g->DrawEllipse(Pens::Blue, x, y, ancho, alto);
	}
};
	