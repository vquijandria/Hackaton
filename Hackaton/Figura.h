#pragma once
using namespace System;
using namespace System::Drawing;

class Figura
{
protected:
	int x, y;
	int ancho, alto;
	int dx;
public:
	Figura()
	{
		x = 20;
		alto = ancho = 40;
		Random r;
		dx = r.Next(5, 16);
		System::Threading::Thread::Sleep(10);
	}
};