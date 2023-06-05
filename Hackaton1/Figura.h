#pragma once
using namespace System;
using namespace System::Drawing;

class Figura
{
protected:
	//atributos de la clase
	int x, y;
public:
	Figura(int x, int y);
	~Figura();
	virtual void borrar(Graphics^ g) { }
	virtual void dibujar(Graphics^ g) { }
};

Figura::Figura(int x, int y)
{
	//VELOCIDAD
	this->x = x;
	this->y = y;
}

Figura::~Figura()
{
}