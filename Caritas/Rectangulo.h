#pragma once
#include "Figura.h"

class Rectangulo : public Figura
{
public:
	Rectangulo() :Figura()
	{
		x = 1;
		y = 20;
	}
	void mostrar(Graphics^ g)
	{
		g->DrawRectangle(Pens::DarkRed, x, y, ancho, alto);
	}
};