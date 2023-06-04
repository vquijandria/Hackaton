#pragma once
using namespace System;
using namespace System::Drawing;

class Carita2 
{
public:
	Carita2()
	{
	}
	void mostrar(Graphics^ g)
	{
		//FIGURA 2
		Pen^ pen1 = gcnew Pen(Color::Blue);

		int centerX1 = 700;  // Coordenada X del centro del círculo
		int centerY1 = 320;  // Coordenada Y del centro del círculo
		int radius1 = 100;                          // Radio del círculo
		int radiusC1 = 10;                          // Radio del circulo de la boca

		int x1 = centerX1 - radius1; // Coordenada X del punto inicial del círculo
		int y1 = centerY1 - radius1; // Coordenada Y del punto inicial del círculo
		int xc1 = 690;
		int yc1 = 350;

		// Dibujar el círculo
		g->DrawEllipse(pen1, x1, y1, radius1 * 2, radius1 * 2);

		// Dibujar los triángulos
		Point triangle4_p1(centerX1 - 40, centerY1 - radius1 + 60);
		Point triangle4_p2(centerX1 - 40, centerY1 - radius1 + 100);
		Point triangle4_p3(centerX1 - 10, centerY1 - radius1 + 80);
		array<Point>^ triangle4_points = { triangle4_p1, triangle4_p2, triangle4_p3 };
		g->DrawPolygon(pen1, triangle4_points);

		Point triangle3_p1(centerX1 + 10, centerY1 - radius1 + 80);
		Point triangle3_p2(centerX1 + 40, centerY1 - radius1 + 100);
		Point triangle3_p3(centerX1 + 40, centerY1 - radius1 + 60);
		array<Point>^ triangle3_points = { triangle3_p1, triangle3_p2, triangle3_p3 };
		g->DrawPolygon(pen1, triangle3_points);

		// Dibujar el circulo de la boca
		g->DrawEllipse(pen1, xc1, yc1, radiusC1 * 4, radiusC1 * 4);
	}
};