#pragma once
#include"Figura.h"

class Carita3 :public Figura //herencia
{
private:
	int radio;
public:
	Carita3(int x, int y, int radio);
	~Carita3();
	void dibujar(Graphics^ g);
	void borrar(Graphics^ g);
};

Carita3::Carita3(int x, int y, int radio) :Figura(x, y)
{
	this->radio = radio;
}

Carita3::~Carita3()
{
}

void Carita3::dibujar(Graphics^ g)
{
	//FIGURA 3
	Pen^ pen = gcnew Pen(Color::Blue);

	int centerX2 = 700;  // Coordenada X del centro del círculo
	int centerY2 = 320;  // Coordenada Y del centro del círculo
	int radius2 = 100;                          // Radio del círculo
	int radiusC2 = 10;                          // Radio del circulo de la boca
	int x2 = centerX2 - radius2; // Coordenada X del punto inicial del círculo
	int y2 = centerY2 - radius2; // Coordenada Y del punto inicial del círculo
	int xc2 = 670;
	int yc2 = 350;

	// Dibujar el círculo
	g->DrawEllipse(pen, x2, y2, radius2 * 2, radius2 * 2);

	// Dibujar los triángulos
	Point triangle5_p1(centerX2 - 40, centerY2 - radius2 + 60);
	Point triangle5_p2(centerX2 - 40, centerY2 - radius2 + 100);
	Point triangle5_p3(centerX2 - 10, centerY2 - radius2 + 80);
	array<Point>^ triangle5_points = { triangle5_p1, triangle5_p2, triangle5_p3 };
	g->DrawPolygon(pen, triangle5_points);

	Point triangle6_p1(centerX2 + 10, centerY2 - radius2 + 80);
	Point triangle6_p2(centerX2 + 40, centerY2 - radius2 + 100);
	Point triangle6_p3(centerX2 + 40, centerY2 - radius2 + 60);
	array<Point>^ triangle6_points = { triangle6_p1, triangle6_p2, triangle6_p3 };
	g->DrawPolygon(pen, triangle6_points);

	// Dibujar el circulo de la boca
	g->DrawRectangle(pen, xc2, yc2, radiusC2 * 7, radiusC2 * 3);
}
void Carita3::borrar(Graphics^ g)
{

	//FIGURA 1 
	Pen^ pen = gcnew Pen(Color::White);
	int centerX = 700;  // Coordenada X del centro del círculo
	int centerY = 320;  // Coordenada Y del centro del círculo

	// Dibujar la raya
	g->DrawLine(pen, centerX - 40, centerY + 20, centerX + 40, centerY + 20);

	//FIGURA 2
	Pen^ pen1 = gcnew Pen(Color::White);
	int radius1 = 100;                          // Radio del círculo
	int radiusC1 = 10;                          // Radio del circulo de la boca
	int xc1 = 690;
	int yc1 = 350;

	// Dibujar el circulo de la boca
	g->DrawEllipse(pen1, xc1, yc1, radiusC1 * 4, radiusC1 * 4);
}