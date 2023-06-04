#pragma once
#include "Carita1.h"
#include "Carita2.h"
#include "Carita3.h"

class Caritas
{
private:
	Carita1* carita1;
	Carita2* carita2;
	Carita3* carita3;
public:
	Caritas()
	{
		carita1 = new Carita1();
		carita2 = new Carita2();
		carita3 = new Carita3();
	}
	~Caritas()
	{
		delete carita1;
		delete carita2;
		delete carita3;
	}
	void mostrar(Graphics^ g)
	{
		carita1->mostrar(g);
		carita2->mostrar(g);
		carita3->mostrar(g);
	}


};