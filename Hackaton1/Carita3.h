#pragma once
using namespace System;
using namespace System::Drawing;

class Carita3 
{
public:
	Carita3()
	{
	}
	void mostrar(Graphics^ g)
	{
		//FIGURA 3
		Pen^ pen2 = gcnew Pen(Color::Orange);

		int centerX2 = 1100;  // Coordenada X del centro del círculo
		int centerY2 = 320;  // Coordenada Y del centro del círculo
		int radius2 = 100;                          // Radio del círculo
		int radiusC2 = 10;                          // Radio del circulo de la boca

		int x2 = centerX2 - radius2; // Coordenada X del punto inicial del círculo
		int y2 = centerY2 - radius2; // Coordenada Y del punto inicial del círculo
		int xc2 = 1060;
		int yc2 = 350;

		// Dibujar el círculo
		g->DrawEllipse(pen2, x2, y2, radius2 * 2, radius2 * 2);

		// Dibujar los triángulos
		Point triangle5_p1(centerX2 - 40, centerY2 - radius2 + 60);
		Point triangle5_p2(centerX2 - 40, centerY2 - radius2 + 100);
		Point triangle5_p3(centerX2 - 10, centerY2 - radius2 + 80);
		array<Point>^ triangle5_points = { triangle5_p1, triangle5_p2, triangle5_p3 };
		g->DrawPolygon(pen2, triangle5_points);

		Point triangle6_p1(centerX2 + 10, centerY2 - radius2 + 80);
		Point triangle6_p2(centerX2 + 40, centerY2 - radius2 + 100);
		Point triangle6_p3(centerX2 + 40, centerY2 - radius2 + 60);
		array<Point>^ triangle6_points = { triangle6_p1, triangle6_p2, triangle6_p3 };
		g->DrawPolygon(pen2, triangle6_points);

		// Dibujar el circulo de la boca
		g->DrawRectangle(pen2, xc2, yc2, radiusC2 * 7, radiusC2 * 3);
	}
};