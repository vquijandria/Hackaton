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
			Pen^ pen = gcnew Pen(Color::Black);

			int centerX = this->ClientSize.Width / 10;  // Coordenada X del centro del círculo
			int centerY = this->ClientSize.Height / 2; // Coordenada Y del centro del círculo
			int radius = 100;                          // Radio del círculo

			int x = centerX - radius; // Coordenada X del punto inicial del círculo
			int y = centerY - radius; // Coordenada Y del punto inicial del círculo

			// Dibujar el círculo
			g->DrawEllipse(pen, x, y, radius * 2, radius * 2);

			// Dibujar los triángulos
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

			// PUNTO INTERMEDIARIO --------

			Pen^ pen1 = gcnew Pen(Color::Blue);

			int centerX1 = this->ClientSize.Width / 2;  // Coordenada X del centro del círculo
			int centerY1 = this->ClientSize.Height / 2; // Coordenada Y del centro del círculo
			int radius1 = 100;                          // Radio del círculo

			int x1 = centerX1 - radius1; // Coordenada X del punto inicial del círculo
			int y1 = centerY1 - radius1; // Coordenada Y del punto inicial del círculo

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
			g->DrawLine(pen1, centerX1 - 40, centerY1 + 20, centerX1 + 40, centerY1 + 20);

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
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
