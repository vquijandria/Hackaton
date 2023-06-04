#pragma once
#include "Figura.h"

class Carita1 : public Figura
{
public:
	Carita1(): Figura()
	{
		x = 220;
		y = 120;
	}
	void mostrar(Graphics^ g)
	{
		/*
		Pen^ pen = gcnew Pen(Color::Black);

		int centerX = this->ClientSize.Width / 2;  // Coordenada X del centro del círculo
		int centerY = this->ClientSize.Height / 2; // Coordenada Y del centro del círculo
		int radius = 100;                          // Radio del círculo

		int x = centerX - radius; // Coordenada X del punto inicial del círculo
		int y = centerY - radius; // Coordenada Y del punto inicial del círculo

		// Dibujar el círculo
		g->DrawEllipse(pen, x, y, radius * 2, radius * 2);

		// Dibujar los triángulos
		Point triangle1_p1(centerX - 40, centerY - radius + 60);
		Point triangle1_p2(centerX - 40, centerY - radius + 100);
		Point triangle1_p3(centerX - 10, centerY - radius + 80);
		array<Point>^ triangle1_points = { triangle1_p1, triangle1_p2, triangle1_p3 };
		g->DrawPolygon(pen, triangle1_points);

		Point triangle2_p1(centerX + 10, centerY - radius + 80);
		Point triangle2_p2(centerX + 40, centerY - radius + 100);
		Point triangle2_p3(centerX + 40, centerY - radius + 60);
		array<Point>^ triangle2_points = { triangle2_p1, triangle2_p2, triangle2_p3 };
		g->DrawPolygon(pen, triangle2_points);

		// Dibujar la raya
		g->DrawLine(pen, centerX - 40, centerY + 20, centerX + 40, centerY + 20);
		*/
	}
};