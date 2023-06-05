#pragma once
#include"Figura.h"

class Carita2 :public Figura //herencia
{
private:
	int radio;
public:
	Carita2(int x, int y, int radio);
	~Carita2();
	void dibujar(Graphics^ g);
	void borrar(Graphics^ g);

};

Carita2::Carita2(int x, int y, int radio) :Figura(x, y)
{
	this->radio = radio;
}

Carita2::~Carita2()
{
}

void Carita2::dibujar(Graphics^ g)
{
	//FIGURA 2
	Pen^ pen = gcnew Pen(Color::Blue);

	int centerX1 = 700;  // Coordenada X del centro del c�rculo
	int centerY1 = 320;  // Coordenada Y del centro del c�rculo
	int radius1 = 100;                          // Radio del c�rculo
	int radiusC1 = 10;                          // Radio del circulo de la boca

	int x1 = centerX1 - radius1; // Coordenada X del punto inicial del c�rculo
	int y1 = centerY1 - radius1; // Coordenada Y del punto inicial del c�rculo
	int xc1 = 690;
	int yc1 = 350;

	// Dibujar el c�rculo
	g->DrawEllipse(pen, x1, y1, radius1 * 2, radius1 * 2);

	// Dibujar los tri�ngulos
	Point triangle4_p1(centerX1 - 40, centerY1 - radius1 + 60);
	Point triangle4_p2(centerX1 - 40, centerY1 - radius1 + 100);
	Point triangle4_p3(centerX1 - 10, centerY1 - radius1 + 80);
	array<Point>^ triangle4_points = { triangle4_p1, triangle4_p2, triangle4_p3 };
	g->DrawPolygon(pen, triangle4_points);

	Point triangle3_p1(centerX1 + 10, centerY1 - radius1 + 80);
	Point triangle3_p2(centerX1 + 40, centerY1 - radius1 + 100);
	Point triangle3_p3(centerX1 + 40, centerY1 - radius1 + 60);
	array<Point>^ triangle3_points = { triangle3_p1, triangle3_p2, triangle3_p3 };
	g->DrawPolygon(pen, triangle3_points);

	// Dibujar el circulo de la boca
	g->DrawEllipse(pen, xc1, yc1, radiusC1 * 4, radiusC1 * 4);
}
void Carita2::borrar(Graphics^ g)
{

}