#pragma once
#include "Figura.h"

class Linea : public Figura
{
public:
	Linea() : Figura()
	{
		x = 1;
		y = 320;
	}
	void mostrar(Graphics^ g)
	{
		g->DrawLine(Pens::DarkRed, x, y, ancho, alto);
	}
};