#pragma once
#include "Figura.h"

class Rombo : public Figura
{
public:
	Rombo()
	{
		x = 1;
		y = 220;
	}
	void mostrar(Graphics^ g)
	{
		array<Point>^ pts = gcnew array<Point>{Point(x + (ancho / 2), y),
			Point(x + ancho, y + (alto / 2)),
			Point(x + (ancho / 2), y + alto),
			Point(x, y + (alto / 2))};
		g->DrawPolygon(Pens::Red, pts);
	}
};