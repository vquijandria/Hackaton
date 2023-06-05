#pragma once
#include"Figura.h"

class Carita1 :public Figura //herencia
{
private:
	int lado;
public:
	Carita1(int x, int y, int lado);
	~Carita1();
	void dibujar(Graphics^ g);
	void borrar(Graphics^ g);
};

Carita1::Carita1(int x, int y, int lado) :Figura(x, y)
{
	this->lado = lado;
}

Carita1::~Carita1()
{
}

void Carita1::dibujar(Graphics^ g)
{
	//FIGURA 1 
	Pen^ pen = gcnew Pen(Color::Black);

	int centerX = 300;  // Coordenada X del centro del c�rculo
	int centerY = 320;  // Coordenada Y del centro del c�rculo
	int radius = 100;                          // Radio del c�rculo

	int x = centerX - radius; // Coordenada X del punto inicial del c�rculo
	int y = centerY - radius; // Coordenada Y del punto inicial del c�rculo

	// Dibujar el c�rculo
	g->DrawEllipse(pen, x, y, radius * 2, radius * 2);

	// Dibujar los tri�ngulos
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
}
void Carita1::borrar(Graphics^ g)
{

}