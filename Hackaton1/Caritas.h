#pragma once
#include"Carita1.h"
#include"Carita2.h"
#include"Carita3.h"
#include<vector>

using namespace System::Drawing;
using namespace System;
using namespace std;

class Caritas
{
private:
	vector<Figura*>* arrf;
public:
	Caritas();
	~Caritas();

	void mostrar(Graphics^ g);
	void agregarFigura(Graphics^ g, char op);
};

Caritas::Caritas()
{
	arrf = new vector<Figura*>();
}

Caritas::~Caritas()
{
	delete arrf;
}
void Caritas::mostrar(Graphics^ g)
{
	for (int i = 0; i < arrf->size();i++)
	{
		arrf->at(i)->borrar(g);
		arrf->at(i)->dibujar(g);
	}
}
void Caritas::agregarFigura(Graphics^ g, char op)
{
	Random r;
	Figura* fig;//declaramos un objeto de tipo figura
	switch (op)
	{
	case 'D':
		fig = new Carita1(700, 350, 60);
		//g->Clear(Color::White);
		break;
	case 'F':
		fig = new Carita2(700, 150, 60);
		break;
	case 'G':
		fig = new Carita3(700, 150, 60);
		break;
	default:
		break;
	}
	arrf->push_back(fig);//fig es variable polimórfica
}