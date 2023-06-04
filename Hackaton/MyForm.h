#pragma once
#include "Carita1.h"
namespace Hackaton {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Carita1* carita1;
		Graphics^ g;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//this->DoubleBuffered = true;
			//this->SetStyle(ControlStyles::AllPaintingInWmPaint | ControlStyles::UserPaint | ControlStyles::Opaque, true);

			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	
		virtual void OnPaint(PaintEventArgs^ e) override
		{
			__super::OnPaint(e);
			Graphics^ g = e->Graphics;
			
			// FIGURA 1 -----------
			

			// FIGURA 2 -----------

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

			// FIGURA 3 -----------

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




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1501, 673);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
	}
	};
}
